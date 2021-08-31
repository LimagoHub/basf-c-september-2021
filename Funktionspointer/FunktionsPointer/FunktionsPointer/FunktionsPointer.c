// FunktionsPointer.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <stdio.h>


typedef int (*MyPtrType)();
typedef void (*PeterType)(char);
typedef double (*Operation)(double, double);

double add(double a, double b)
{
	return a + b;
}


int sinn_des_lebens()
{
	printf("Programm wird ausgeführt!\n");
	return 42;
}


int groesste_einstellige_zahl()
{
	printf("Programm wird ausgeführt!\n");
	return 9;
}

void bar(char c)
{
	printf("Programm wird ausgeführt! mit %c\n", c);
}

void serial_init(PeterType callback)
{
	
}

void button()
{
	
}

int main()
{
	/*MyPtrType ergebnis = sinn_des_lebens;
	PeterType p = bar;

	ergebnis = groesste_einstellige_zahl;*/


	MyPtrType feld[] = { sinn_des_lebens, groesste_einstellige_zahl };

	int ergebnis = feld[0]();
	

	//bar('A');
	//p('B');

	printf("%d\n", ergebnis);
}


