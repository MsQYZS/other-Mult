#include <iostream>
//#define NDEBUG//调试，与assert配合使用，用了NDEBUG表示不开启调试 
#include <string>
#include <vector>
#include <cstring>
#include <ctime>
#include <cstdlib>
#include <windows.h>
#include <conio.h>
#include <stdexcept>
#include <initializer_list>
#include <cassert>
//#include "debugceshi.h"
#include "DeBug.h"
#include "Mult.h"
using std::cin; using std::cout; using std::cerr; using std::endl; using std::string;
using std::vector; using std::begin; using std::end; using std::flush; using std::runtime_error;
using std::initializer_list; using std::istream; using std::ostream;
int main(int avgc, char* avgv[]) {
	int a=10,b=1,c=25;
	for(int i=0;i<=100000;++i){
		cout<<mult(a,c)<<endl;
		++c; 
	}
	return EXIT_SUCCESS;
}


















