#include <iostream>
using namespace std;
#include "board.h"
#include "error.h"

int main()
{
	Board board;
	cout << board.move(0, 0, 0) << endl;
	board.check();
	board.print();
	cout << board.move(0, 0, 1) << endl;
	board.check();
	board.print();
	cout << board.move(2, 2, 0) << endl;
	board.check();
	board.print();
	cout << board.move(2, 0, 1) << endl;
	board.check();
	board.print();
	cout << board.move(0, 2, 0) << endl;
	board.check();
	board.print();
	cout << board.move(0, 1, 1) << endl;
	board.check();
	board.print();
	cout << board.move(1, 2, 0) << endl;
	board.check();
	board.print();
}