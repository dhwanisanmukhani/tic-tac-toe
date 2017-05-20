#ifndef ERROR_H
#define ERROR_H
#include <iostream>
using namespace std;

class Error
{
private:
	Error();
public:
	static void dump(string msg);
};

#endif