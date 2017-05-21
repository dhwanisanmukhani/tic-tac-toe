#include "player.h"
#include <iostream>
using namespace std;

Player::Player(){
	cin >> name;
}

void Player::wins(){
	cout << name << " Wins!!"<<endl;
}