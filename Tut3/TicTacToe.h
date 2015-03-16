#pragma once
#ifndef TICTACTOE_H
#define TICTACTOE_H

class TicTacToe
{

public:
	int player;
	int Choice;

	TicTacToe();
	~TicTacToe();

	void choice();
	int restart();
	int move();
	void print();
	void iswon();

};

#endif
