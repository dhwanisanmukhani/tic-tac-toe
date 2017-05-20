SRC_DIR := ./src
OBJ_DIR := ./build
TEST_DIR := ./test
INCLUDE_DIR := ./include
CC := g++ -std=c++11 -g -O2 -I$(INCLUDE_DIR)

$(OBJ_DIR)/error.o: $(SRC_DIR)/error.cpp $(INCLUDE_DIR)/error.h
	$(CC) -c $(SRC_DIR)/error.cpp -o $(OBJ_DIR)/error.o
$(OBJ_DIR)/test-error: $(OBJ_DIR)/error.o $(TEST_DIR)/error.cpp
	$(CC) $(TEST_DIR)/error.cpp $(OBJ_DIR)/error.o -o $(OBJ_DIR)/test-error
run-test-error: $(OBJ_DIR)/test-error
	$(OBJ_DIR)/test-error 