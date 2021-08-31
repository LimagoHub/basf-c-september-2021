#pragma once

#define NAME_SIZE 30
typedef struct
{
	char name[NAME_SIZE + 1];
	int gewicht;
} Schwein;


void schwein_init(Schwein *neuesSchwein);


void schwein_fressen(Schwein* schwein);
