#include <stdio.h>
#include <malloc.h>
#include <string.h>
#include "liste.h"

static Kettenglied* start = NULL;
static Kettenglied* akt = NULL;

int liste_add(void* neuesElement)
{
	Kettenglied* neu = malloc(sizeof(Kettenglied));
	memset(neu, 0, sizeof(Kettenglied));
	neu->daten = neuesElement;

	if(is_empty())
	{
		start = neu;
	} else
	{
		liste_move_last();
		akt->nach = neu;
		neu->vor = akt;
	}
	akt = neu;
	return 0;
}

bool is_empty()
{
	return start == NULL;
}

bool is_begin_of_list()
{
	return start == akt;
}

bool is_end_of_list()
{
	// Nicht kommuntativ
	return is_empty() || akt->nach == NULL;
}
