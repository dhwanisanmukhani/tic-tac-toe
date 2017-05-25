#ifndef PLAYER_H
#define PLAYER_H
#include <iostream>
using namespace std;

class Player
{
public:
	virtual void wins() = 0;
	virtual pair<int, int> get_move() = 0;
};

#endif
