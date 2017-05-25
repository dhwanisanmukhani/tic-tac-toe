#ifndef BOARD_H
#define BOARD_H
#include "error.h"

class Board
{
public:
	char b[3][3];
	Board();
	int apply_move(int row, int col, int val);
	void undo_move(int row, int col);
	void print();
	int check();
};

#endif