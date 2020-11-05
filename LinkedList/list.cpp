#include "list.h"
#include <iostream>
using namespace std;

list::list(string n):name(n),next(NULL){
	
}
ostream& operator<<(ostream& os,const list& c){
	return os <<c.name<<endl;
}


