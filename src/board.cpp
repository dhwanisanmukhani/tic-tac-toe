#include "board.h"
#include "error.h"

Board::Board(){
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			b[i][j] = 0;
		}
	}
}

void Board::move(int row, int col, int val){
	if(row < 0 || row > 2){
		dump("Wrong row choice!! Dont you know how to play, You dumb fellow!!!");
		return;
	}
	if(col < 0 || col > 2){
		dump("Wrong row choice!! Dont you know how to play, You dumb fellow!!!")
		return;
	}
	if(val == 0)
		b[row][col] == 'O';
	else
		b[row][col] == 'X';
	if(check() < 2){
		print();
		cout<<"Player "<<check()+1<<" wins!! Congo!!"<<endl;
	}
	else if(check() == 2){
		print();
		cout<<"Draw!!"<<endl;
	}
}

int Board::check(){
	for(int i=0;i<3;i++){
		if((b[i][0] == b[i][1]) && (b[i][0] == b[i][2])){
			if(b[i][0] == 'O')
				return 0;
			else if(b[i][0] == 'X')
				return 1;
		}
		if((b[0][i] == b[1][i]) && (b[1][i] == b[2][i])){
			if(b[0][i] == 'O')
				return 0;
			else if(b[0][i] == 'X')
				return 1;
		}
	}
	if((b[0][0] == b[1][1]) && (b[1][1] == b[2][2])){
		if(b[0][0] == 'O')
			return 0;
		else if(b[0][0] == 'X')
			return 1;
	}
	if((b[2][0] == b[1][1]) && (b[1][1] == b[0][2])){
		if(b[2][0] == 'O')
			return 0;
		else if(b[2][0] == 'X')
			return 1;
	}
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			if(b[i][j] == 0)
				return 2;
		}
	}
	return 3;
}

void Board::print(){
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			if(b[i][j])
				cerr<<b[i][j];
			else
				cerr<<" ";
			if(j != 2)
				cerr<" | ";
		}
		cerr<<endl;
		for (int i = 0; i < 9; ++i){
			cerr<<"_";
		}
		cerr<<endl;
	}
}