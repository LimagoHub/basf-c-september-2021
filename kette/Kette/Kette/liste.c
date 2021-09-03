#include <stdio.h>
#include <malloc.h>
#include <string.h>
#include "liste.h"

void liste_init(Liste* liste)
{
	memset(liste, 0, sizeof(Liste));
}

void liste_clear(Liste* liste)
{
	while(liste_remove(liste)){}
}

int liste_add(Liste* liste, void* neuesElement)
{
	Kettenglied* neu = malloc(sizeof(Kettenglied));
	memset(neu, 0, sizeof(Kettenglied));
	neu->daten = neuesElement;

	if(is_empty(liste))
	{
		liste->start = neu;
	} else
	{
		liste_move_last(liste);
		liste->akt->nach = neu;
		neu->vor = liste->akt;
	}
	liste->akt = neu;
	return 0;
}

bool liste_remove(Liste * liste)
{
	if(is_empty(liste))return false;

	if(is_begin_of_list(liste) && is_end_of_list(liste))
	{
		free(liste->start);
		liste->start = liste->akt = NULL;
		return true;
	}

	if(is_begin_of_list(liste))
	{
		liste->start = liste->akt = liste->akt->nach;
		free(liste->start->vor);
		liste->start->vor = NULL;
		return true;
	}

	if(is_end_of_list(liste))
	{
		liste_move_previous(liste);
		free(liste->akt->nach);
		liste->akt->nach = NULL;
		return true;
	}
	Kettenglied* to_delete = liste->akt;
	liste->akt->vor->nach = liste->akt->nach;
	liste->akt->nach->vor = liste->akt->vor;
	liste_move_next(liste);
	free(to_delete);
	return true;
	
	
}

void* liste_get(Liste * liste)
{
	return is_empty(liste) ? NULL : liste->akt->daten;
}

bool liste_update(Liste* liste,void* neuesElement)
{
	if(is_empty(liste)) return false;

	liste->akt->daten = neuesElement;
	
	return true;

}

bool liste_move_first(Liste* liste)
{
	if (is_empty(liste)) return false;
	liste->akt = liste->start;
	return true;
}

bool liste_move_last(Liste* liste)
{
	if(is_empty(liste)) return false;

	while (liste_move_next(liste)){}
	
	return true;
}

bool liste_move_previous(Liste* liste)
{
	if(is_begin_of_list(liste)) return false;

	liste->akt = liste->akt->vor;
	return true;
}

bool liste_move_next(Liste* liste)
{
	if(is_end_of_list(liste))	return false;

	liste->akt = liste->akt->nach;

	return true;
}

bool is_empty(Liste* liste)
{
	return liste->start == NULL;
}

bool is_begin_of_list(Liste* liste)
{
	return liste->start == liste->akt;
}

bool is_end_of_list(Liste* liste)
{
	// Nicht kommuntativ
	return is_empty(liste) || liste->akt->nach == NULL;
}
