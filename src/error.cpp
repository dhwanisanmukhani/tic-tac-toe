#include <iostream>
#include "error.h"

void Error::dump(string msg){
	cout<<msg;
}

void Error::dump(char* msg){
	while(msg)
	{
		cout<< msg;
		msg++;
	}
	cout<<endl;
}