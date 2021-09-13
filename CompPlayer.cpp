#include "CompPlayer.h"

#include "Game.h"

#include <iostream>

void CompPlayer::think_course(Game* table)

{

	int i = rand() % 3; // и т.д. будет,

	int j = rand() % 3;

}

string CompPlayer::getName()

{

	return name;

}

char CompPlayer::getSymbol()

{

	return symbol;

}