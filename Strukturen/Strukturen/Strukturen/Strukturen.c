#include <stdio.h>
#include <string.h>

#include "Schwein.h"


struct xyz
{
	unsigned char high;
	unsigned char low;
};

union myregister
{
	struct xyz einzelneBytes;
	unsigned short x;
};




int main()
{

	unsigned short irgendwas = 0x0f01;

	union myregister bla;
	bla.x = 0x0f01;
	
	printf("%u\n", bla.einzelneBytes.low);


	
	Schwein piggy = {"Hallo", 20};
	Schwein babe = { "Hallo", 20 };

	schwein_init(&piggy);


	schwein_fressen(&piggy);

	printf_s("%s\n", piggy.name);
	printf_s("%d\n", piggy.gewicht);

}

