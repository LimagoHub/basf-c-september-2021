#include "spiel.h"
#include <stdbool.h>

static void init();
static bool gameover();
static void human_turn();
static void computer_turn();

static int stones;

void play()
{
	init();
	while (! gameover())
	{
		human_turn();
		computer_turn();
	}
}

void init()
{
	stones = 23;
}

bool gameover()
{
	return stones <= 0;
}

void human_turn()
{

}

void computer_turn()
{

}