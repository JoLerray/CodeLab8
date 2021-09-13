#pragma once


#include <string>

#include<vector>

class CompPlayer;

class MyPlayer;

using namespace std;
class Game
{
private:
	char matrix[3][3]; //Матрица игры
public:
	Game();
	template <class T, class T1, class T2> void course(T i, T j, T1 Player, T2 matrix);
	void Start_Game(MyPlayer& I, CompPlayer& comp, Game& table);
	bool check_course();
	bool check_game();
	void print_matrix();
	char(&getMatrix())[3][3];
};