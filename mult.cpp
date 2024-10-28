#include <iostream>
#include "Mult.h"
using std::cout;
int main(int avgc, char* avgv[]) {
	int a=10,b=1,c=25;
	for(int i=0;i<=100000;++i){
		cout<<mult(a,c)<<endl;
		++c; 
	}
	return EXIT_SUCCESS;
}


















