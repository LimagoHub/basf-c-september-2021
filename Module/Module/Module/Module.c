// Module.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <stdio.h>

#include  "ausgabe.h"
#include "dozent_math.h"


#define MWST_SATZ 1.19

#define MAX(a,b) a>b?a:b

inline double max(double a, double b)
{
	return a > b ? a : b;
}


double convert_netto_to_brutto(double netto)
{
	return netto * MWST_SATZ;
}

double convert_brutto_to_netto(double brutto)
{
	return brutto / MWST_SATZ;
}


void foo()
{

	static int i = 0;
	

	if (i >= 10) return;
	
	printf("%d\n", i ++);

	foo();
}



int main()
{
	printf("%d\n", komischeVariable);
}


