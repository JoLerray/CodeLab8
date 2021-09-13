#include "MyPlayer.h"
#include <cstdio>

MyPlayer::MyPlayer(string _name = "Player"):name{_name}{}


string MyPlayer::getName()
{ 
	return name;  
}
char MyPlayer::getSymbol()
{
	return symbol;
}

void MyPlayer::setName(string _name = "Player")
{ 
	name = _name; 
}
void MyPlayer::think_course(Game* table)

{

	table->print_matrix();

	std::cout << "come up with a move" << std::endl;

}