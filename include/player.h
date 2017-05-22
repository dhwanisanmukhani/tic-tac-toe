#ifndef PLAYER_H
#define PLAYER_H
#include <iostream>
using namespace std;

class Player
{
private:
	string name;
public:
	Player(string _name=string("aaa"));
	void wins();
};

#endif
