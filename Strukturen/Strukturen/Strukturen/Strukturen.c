#include <stdio.h>
#include <string.h>

#include "Schwein.h"




int main()
{
	Schwein piggy = {"Hallo", 20};
	Schwein babe = { "Hallo", 20 };

	schwein_init(&piggy);


	schwein_fressen(&piggy);

	printf_s("%s\n", piggy.name);
	printf_s("%d\n", piggy.gewicht);

}

