#include "game.h"
#include "board.h"
#include "player.h"
#include "humanPlayer.h"
#include "AIPlayer.h"
#include <vector>

Game::Game(string _name1){
	p[0] = new HumanPlayer(_name1);
	p[1] = new AIPlayer(&board);
}

void Game::play(){
	int i = 0;

	while(1)
	{
		if(i == 0)
			cout<< "Your chance"<<endl;
		pair<int, int> entry;
		entry = p[i]->get_move();
		if(board.apply_move(entry.first, entry.second, i) == 1){
			i = (i+1)%2;
		}
		board.print();
		if(board.check() < 3)
			break;
	}
	int res = board.check();
	if(res == 0)
		p[0]->wins();
	else if(res == 1)
		p[1]->wins();
	else if(res == 2)
		cout << "Game Draw!!"<<endl;
}
