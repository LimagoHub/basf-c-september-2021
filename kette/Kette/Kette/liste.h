#pragma once
#include <stdbool.h>

typedef  struct _kettenglied
{
	void* daten;
	struct _kettenglied * vor, * nach;
	
}
Kettenglied;

/* Fügt neues Element am Ende der Liste an*/
int liste_add(void* neuesElement);

/* aktuelles Element entfernen*/
bool liste_remove();

/* aktuelles Element zurückgeben oder NULL wenn die Liste leer ist*/
void * liste_get();

/* aktuelles Element ändern*/
bool liste_update(void* neuesElement);

bool liste_move_first();	/* false wenn liste leer ist*/

bool liste_move_last();		/* false wenn liste leer ist*/

bool liste_move_previous();/* false wenn er sich nicht bewegen kann*/

bool liste_move_next();/* false wenn er sich nicht bewegen kann*/

bool is_empty(); /* True wenn liste leer ist*/

bool is_begin_of_list(); /* True wenn liste leer ist oder sich der Cursor auf dem ersten Datensatz befindet*/

bool is_end_of_list(); /* True wenn liste leer ist oder sich der Cursor auf dem letzten Datensatz befindet*/