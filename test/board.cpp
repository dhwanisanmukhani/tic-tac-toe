#include <iostream>
using namespace std;
#include "board.h"
#include "error.h"

int main()
{
	Board board;
	board.apply_move(0, 2, 0);
	board.apply_move(0, 0, 1);
	board.apply_move(0, 1, 1);
	board.apply_move(1, 0, 0);
	board.apply_move(1, 1, 0);
	board.apply_move(1, 2, 1);
	board.apply_move(2, 0, 0);
	board.apply_move(2, 1, 1);
	board.apply_move(2, 2, 0);
	cout << board.check()<<endl;
	board.print();
}
