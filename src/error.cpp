#include "error.h"
#include <cassert>

void Error::dump(string msg){
	cerr<<msg<<endl;
	assert(false);
}