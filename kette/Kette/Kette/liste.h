#pragma once
#include <stdbool.h>

typedef  struct _kettenglied
{
	void* daten;
	struct _kettenglied * vor, * nach;
	
}
Kettenglied;

typedef struct
{
	Kettenglied* start;
	Kettenglied* akt;
} Liste;

void liste_init(Liste* liste);


void liste_clear(Liste *liste);

/* Fügt neues Element am Ende der Liste an*/
int liste_add(void* neuesElement);

/* aktuelles Element entfernen*/
bool liste_remove(Liste* liste); // NICHT IMPLEMENTIEREN

/* aktuelles Element zurückgeben oder NULL wenn die Liste leer ist*/
void * liste_get(Liste* liste);

/* aktuelles Element ändern*/
bool liste_update(Liste* liste,void* neuesElement);

bool liste_move_first(Liste* liste);	/* false wenn liste leer ist*/

bool liste_move_last(Liste* liste);		/* false wenn liste leer ist*/

bool liste_move_previous(Liste* liste);/* false wenn er sich nicht bewegen kann*/

bool liste_move_next(Liste* liste);/* false wenn er sich nicht bewegen kann*/

bool is_empty(Liste* liste); /* True wenn liste leer ist*/

bool is_begin_of_list(Liste* liste); /* True wenn liste leer ist oder sich der Cursor auf dem ersten Datensatz befindet*/

bool is_end_of_list(Liste* liste); /* True wenn liste leer ist oder sich der Cursor auf dem letzten Datensatz befindet*/