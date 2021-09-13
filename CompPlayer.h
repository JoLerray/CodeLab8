#pragma once
#pragma once

#include <string>

#include"Game.h"

using namespace std;

class CompPlayer

{

private:

	const string name = "computer";

	char symbol = 'o';

	friend void Game::Start_Game(MyPlayer& I, CompPlayer& comp, Game& table);

public:

	void think_course(Game* table); //ход

	string getName();

	char getSymbol();

};