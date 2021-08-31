#include "Schwein.h"
#include <string.h>

void schwein_init(Schwein *this)
{
	strcpy_s(this->name, NAME_SIZE, "nobody");
	this->gewicht = 10;
}

void schwein_fressen(Schwein* this)
{
	this->gewicht++;
}
