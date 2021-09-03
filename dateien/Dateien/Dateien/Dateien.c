#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

#define READ_ONLY "r"
#define WRITE_ONLY "w"


double add(double a, double b)
{
	printf("Du kommst hier rein");
	printf("Add wurde gerufen");
	return a + b;
}

int main()
{
	// char buffer[200];
	// FILE* meine_eingabe_datei;
	// FILE* meine_ausgabe_datei;
	//
	// errno_t fehler = fopen_s(&meine_ausgabe_datei,"c:\\tmp\\tabelle.txt", WRITE_ONLY);
	// if(fehler)
	// {
	// 	fprintf(stderr, "Fehler beim Öffnen der Datei Fehler Nr. %d\n", fehler);
	// 	return -1;
	// }
	//
	// fprintf(meine_ausgabe_datei, "%10s%10s\n", "x", "y");
	//
	// for(double x = -4.0; x <= 4.0; x+=0.5)
	// {
	// 	fprintf(meine_ausgabe_datei, "%+10.2lf%+10.2lf\n", x, x * x);
	// }
	//
	//
	// fclose(meine_ausgabe_datei);
	// return 0;




	
	int a = 10;

	char buffer[20];

	_itoa(10, buffer, 20, 10);

	a = atoi(buffer);

	
	printf(buffer);
	
	
}


