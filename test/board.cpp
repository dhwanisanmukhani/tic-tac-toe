#include <iostream>
using namespace std;
#include "board.h"
#include "error.h"

int main()
{
	Board board;
	int a;
	a = board.move(0, 0, 0);
	board.check();
	board.print();
	a = board.move(1, 1, 1);
	board.check();
	board.print();
	a = board.move(2, 2, 0);
	board.check();
	board.print();
	a = board.move(2, 0, 1);
	board.check();
	board.print();
	a = board.move(0, 2, 0);
	board.check();
	board.print();
	a = board.move(0, 1, 1);
	board.check();
	board.print();
	a = board.move(1, 2, 0);
	board.check();
	board.print();
}