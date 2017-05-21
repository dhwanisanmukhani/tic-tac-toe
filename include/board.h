#ifndef BOARD_H
#define BOARD_H
#include "error.h"

class Board
{
private:
	char b[3][3];
public:
	Board();
	int move(int row, int col, int val);
	void print();
	int check();
};

#endif