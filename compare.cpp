
#include <iostream>
#include "compare.h"
#include <cmath>

using namespace std;
//char compare (param1&, param2&);
//int testdata=0;
//int dummy;
//dummy=compare(testdata)
//void show_grades(int data[], int num_values);
char compare (int param1, int param2){
	

	param1 = -param1;
	param2 = -param2;


	if (param1 > param2) {return('<');}

	if (param1 < param2) {return('>');}

	if (param1 == param2) {return('=');}
}

