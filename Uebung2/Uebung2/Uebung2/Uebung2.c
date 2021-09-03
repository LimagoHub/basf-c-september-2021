// Uebung2.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <stdio.h>


void foo(size_t tiefe)
{
	
	
	
	if (tiefe <= 0) return;
	
	foo(tiefe-1);
	
	int a = tiefe * 10;

	printf("%d\n", a);

	
}


int main()
{
	foo(3) ;
}


