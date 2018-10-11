
#include <iostream>
//#include utilities.h
#include <cmath>
#include "compare.h"
using namespace std;

//void compare (int var1, int var2);
//void show_grades(int data[], int num_values);

int main() {
     int var1, var2;
     	cout << "Input two real numbers: \n";
	cin >> var1;
	cin >> var2;
     char output=compare(var1,var2);

	if (output=='>') {cout<< var1 << " is greater than " << var2 << endl;}

	if (output=='<') {cout<< var1 << " is less than " << var2 << endl;}
	
	if (output=='=') {cout<< var1 << " is equal to " << var2 << endl;}
	
	return(0);
}




