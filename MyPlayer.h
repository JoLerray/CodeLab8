#pragma once
#include <iostream>
using namespace std;
#include"Game.h"

class Game;
class MyPlayer
{
private:
	string name;
	char symbol = 'x';
	friend void Game::Start_Game(MyPlayer& I, CompPlayer& comp, Game& table);
public:
	void think_course(Game* table);
	MyPlayer(string);
	void setName(string);
	string getName();
	char getSymbol();
};