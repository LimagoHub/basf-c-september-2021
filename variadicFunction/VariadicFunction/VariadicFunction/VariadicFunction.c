// VariadicFunction.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <stdio.h>

double summe(int argc, double value, ...)
{
	double result = 0;
	double * ptr = &value;

	for (int i = 0; i < argc; ++i)
	{
		result += ptr[i];
	}

	return result;
}

ausgabe(xxxxxxxx)
{
	
}
int main()
{
	int a = 10;
	int* ptr = &a;
	double ergebnis = summe(4, 10.0, 20.0, 30.0, 40.0);
	printf("%lf\n", ergebnis);


	ausgabe("Hello", "world", "Hello", "Universum","Hello","Galaxy", NULL);
}


