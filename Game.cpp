#define _CRT_SECURE_NO_WARNINGS

#include "Game.h"

#include "MyPlayer.h"

#include "CompPlayer.h"

#include <iostream>

Game::Game()

{

	for (int i = 0; i < 3; i++)

	{

		for (int j = 0; j < 3; j++)

		{

			matrix[i][j] = '*';

		}

	}

}

void Game::print_matrix()

{

	for (int i = 0; i < 3; i++) //accesses elements of vector v

	{

		for (int j = 0; j < 3; j++)

		{

			cout << matrix[i][j] << " ";

		}

		cout << endl;

	}

}

template<class T, class T1, class T2>

inline void Game::course(T i, T j, T1 Player, T2 matrix)

{

	cout << "player's move " << Player.getName() << endl;

	matrix[i][j] = Player.getSymbol();

	cout << endl;

}

bool Game::check_course() // Здесь будет проверка хода (выход за границы, занятость этой клетки)

{

return 0;

}

bool Game::check_game() // Здесь проверка конца игры и если кто-то выиграл то будет выводиться соответствующее сообщение

{

	return 0;

}

void Game::Start_Game(MyPlayer& I, CompPlayer& comp, Game& table) // матрица меняется

{

	//Здесь будет в if проверяться bool функция check_game

	course(0, 0, I, matrix);

	print_matrix();

	course(1, 1, comp, matrix);

	print_matrix();

	course(0, 1, I, matrix);

	print_matrix();

	course(2, 2, comp, matrix);
	print_matrix(); 
	course(0, 2, I, matrix);
	print_matrix();
}
char(&Game::getMatrix())[3][3]
{
	return matrix;
}
