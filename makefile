SRC_DIR := ./src
OBJ_DIR := ./build
TEST_DIR := ./test
INCLUDE_DIR := ./include
CC := g++ -std=c++11 -g -O2 -I$(INCLUDE_DIR)

$(OBJ_DIR)/error.o: $(SRC_DIR)/error.cpp $(INCLUDE_DIR)/error.h
	$(CC) -c $(SRC_DIR)/error.cpp -o $(OBJ_DIR)/error.o
$(OBJ_DIR)/board.o: $(SRC_DIR)/board.cpp $(INCLUDE_DIR)/board.h $(INCLUDE_DIR)error.h
	$(CC) -c $(SRC_DIR)/board.cpp -o $(OBJ_DIR)/board.o
$(OBJ_DIR)/test-error: $(OBJ_DIR)/error.o $(TEST_DIR)/error.cpp
	$(CC) $(TEST_DIR)/error.cpp $(OBJ_DIR)/error.o -o $(OBJ_DIR)/test-error
$(OBJ_DIR)/test-board: $(OBJ_DIR)board.o $(TEST_DIR)/board.cpp
	$(CC) $(TEST_DIR)/board.cpp $(OBJ_DIR)/board.o -o $(OBJ_DIR)/test-board
run-test-error: $(OBJ_DIR)/test-error
	$(OBJ_DIR)/test-error 
run-test-board: $(OBJ_DIR)/test-board
	$(OBJ_DIR)/test-board