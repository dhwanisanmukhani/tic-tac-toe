#include "humanPlayer.h"
#include "player.h"

void HumanPlayer::wins(){
	cout << name << " Wins!!\n";
}

pair<int, int> HumanPlayer::get_move(){
	int row, col;
	cin >> row >> col;
	return make_pair(row, col);
}
HumanPlayer::HumanPlayer(string _name){
	name = _name;
}
