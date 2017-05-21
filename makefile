SRC_DIR := ./src
OBJ_DIR := ./build
TEST_DIR := ./test
INCLUDE_DIR := ./include
CC := g++ -std=c++11 -g -O2 -I$(INCLUDE_DIR)

$(OBJ_DIR)/error.o: $(SRC_DIR)/error.cpp $(INCLUDE_DIR)/error.h
	$(CC) -c $(SRC_DIR)/error.cpp -o $(OBJ_DIR)/error.o
$(OBJ_DIR)/board.o: $(SRC_DIR)/board.cpp $(INCLUDE_DIR)/board.h $(INCLUDE_DIR)/error.h
	$(CC) -c $(SRC_DIR)/board.cpp -o $(OBJ_DIR)/board.o
$(OBJ_DIR)/player.o: $(SRC_DIR)/player.cpp $(INCLUDE_DIR)/player.h
	$(CC) -c $(SRC_DIR)/player.cpp -o $(OBJ_DIR)/player.o
$(OBJ_DIR)/game.o: $(SRC_DIR)/game.cpp $(INCLUDE_DIR)/board.h $(INCLUDE_DIR)/player.h $(INCLUDE_DIR)/error.h $(INCLUDE_DIR)/game.h
	$(CC) -c $(SRC_DIR)/game.cpp -o $(OBJ_DIR)/game.o
$(OBJ_DIR)/test-error: $(OBJ_DIR)/error.o $(TEST_DIR)/error.cpp
	$(CC) $(TEST_DIR)/error.cpp $(OBJ_DIR)/error.o -o $(OBJ_DIR)/test-error
$(OBJ_DIR)/test-board: $(OBJ_DIR)/board.o $(TEST_DIR)/board.cpp
	$(CC) $(TEST_DIR)/board.cpp $(OBJ_DIR)/board.o $(OBJ_DIR)/error.o -o $(OBJ_DIR)/test-board
$(OBJ_DIR)/test-game: $(OBJ_DIR)/game.o $(TEST_DIR)/game.cpp
	$(CC) $(TEST_DIR)/game.cpp $(OBJ_DIR)/game.o $(OBJ_DIR)/board.o $(OBJ_DIR)/error.o $(OBJ_DIR)/player.o -o $(OBJ_DIR)/test-game
$(OBJ_DIR)/test-player: $(OBJ_DIR)/player.o $(TEST_DIR)/player.cpp
	$(CC) $(TEST_DIR)/player.cpp $(OBJ_DIR)/player.o -o $(OBJ_DIR)/test-player
run-test-error: $(OBJ_DIR)/test-error
	$(OBJ_DIR)/test-error 
run-test-board: $(OBJ_DIR)/test-board
	$(OBJ_DIR)/test-board
run-test-game: $(OBJ_DIR)/test-game
	$(OBJ_DIR)/test-game
run-test-player: $(OBJ_DIR)/test-player
	$(OBJ_DIR)/test-player