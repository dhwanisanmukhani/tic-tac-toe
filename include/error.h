#ifndef ERROR_H
#define ERROR_H
#include <string>
using namespace std;

class Error
{
private:
	Error();
public:
	static void dump(char* msg);
	static void dump(string msg);
};

#endif