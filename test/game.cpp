#include <iostream>
#include "board.h"
#include "game.h"
#include "player.h"
using namespace std;

int main(int argc, char const *argv[]){
	Game game(argv[1], argv[2]);
	game.play();
}