all:
	g++ -std=c++11 -g -O2 -I./include src/main.cpp -o bin/tic-tac-toe

run:
	./bin/tic-tac-toe