#include "game.h"
#include "board.h"
#include "player.h"
#include <vector>

Game::Game(string _name1, string _name2){
	p[0] = Player(_name1);
	p[1] = Player(_name2);
}

void Game::play(){
	int i = 0;

	while(1)
	{
		cout<< "Player" <<i+1 <<" chance"<<endl;
		int col;
		int row;
		cin >> row >> col;
		if(board.move(row, col, i) == 1){
			i = (i+1)%2;
		}
		board.print();
		if(board.check() < 3)
			break;
	}
	int res = board.check();
	if(res == 0)
		p[0].wins();
	else if(res == 1)
		p[1].wins();
	else if(res == 2)
		cout << "Game Draw!!"<<endl;
}
