// Kette.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <stdio.h>
#include <malloc.h>
#include <string.h>

#include "liste.h"


#define NAME_SIZE 30
typedef struct
{
	char name[NAME_SIZE + 1];
	int gewicht;
} Schwein;


typedef struct
{
	char name[NAME_SIZE + 1];
	int gewicht;
} Katze;



typedef struct
{
	char name[NAME_SIZE + 1];
	int gewicht;
} Hund;



int main()
{

	Liste schweine;
	Liste hunde;
	Liste katzen;

	liste_init(&schweine);
	liste_init(&hunde);
	liste_init(&katzen);
	
	for (int i = 0; i < 10; ++i)
	{
		Schwein* piggy = malloc(sizeof(Schwein));

		liste_add(&schweine, piggy);
		
	}

	for (int i = 0; i < 10; ++i)
	{
		Katze* mietzie = malloc(sizeof(Katze));

		liste_add(&katzen, mietzie);
	}

	for (int i = 0; i < 10; ++i)
	{
		Hund* bello = malloc(sizeof(Hund));

		liste_add(&hunde, bello);
	}



	
	
}


