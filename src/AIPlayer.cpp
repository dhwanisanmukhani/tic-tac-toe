#include "AIPlayer.h"
#include "player.h"
#include "board.h"

#include <iostream>
#include <cassert>
using namespace std;

AIPlayer::AIPlayer(Board* _board){
	board = _board;
}

void AIPlayer::wins(){
	cout << "Computer Wins!!\n";
}

pair<int, int> AIPlayer::get_move(){
	return minimax(true).first;
}
pair<pair<int, int> , int> AIPlayer::minimax(bool max){
	int row = -1, col = -1, score;
	int check = board->check();
	if(check == 1){
		score=1;
	}
	else if(check==0){
		score=-1;
	}
	else if(check==2){
		score=0;
	}
	else{
		if(max) 
			score = -2;
		else 
			score = 2;
		for(int i=0;i<3;i++){
			for(int j=0;j<3;j++){
				if(board->b[i][j] != '\0')
					continue;
				board->apply_move(i, j, int(max));
				int _score = minimax(!max).second;
				if(max == true && _score > score)
					row = i, col = j, score = _score;
				else if(max == false && _score < score)
					row = i, col = j, score = _score;
				board->undo_move(i, j);
			}
		}
	}
	return make_pair(make_pair(row, col), score);
}