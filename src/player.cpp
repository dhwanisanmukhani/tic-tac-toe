#include "player.h"
#include <iostream>
using namespace std;

Player::Player(string _name){
	name = _name;
}

void Player::wins(){
	cout << name << " Wins!!"<<endl;
}