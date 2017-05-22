#ifndef GAME_H
#define GAME_H
#include "board.h"
#include "player.h"
#include <vector>

class Game{
public:
	Board board;
	Player p[2];
	Game(string _name1, string _name2);
	void play();
};

#endif