#include <iostream>
using namespace std;
#include "board.h"
#include "error.h"

int main()
{
	Board board;
	board.move(0, 0, 0);
	board.check();
	board.print();
	board.move(1, 1, 1);
	board.check();
	board.print();
	board.move(2, 2, 0);
	board.check();
	board.print();
	board.move(2, 0, 1);
	board.check();
	board.print();
	board.move(0, 2, 0);
	board.check();
	board.print();
	board.move(0, 1, 1);
	board.check();
	board.print();
	board.move(1, 2, 0);
	board.check();
	board.print();
}