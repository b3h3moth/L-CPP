#include "template-maximum.h"
#include <iostream>
using namespace std;

int main() {
	int int1, int2, int3;
	double double1, double2, double3;
	char char1, char2, char3;

	cout << "Input three integer vakues: ";
	cin >> int1 >> int2 >> int3;
	cout << "The maximum integer is: " << maximum(int1, int2, int3);

	cout << "\n\nInput three double vakues: ";
	cin >> double1 >> double2 >> double3;
	cout << "The maximum double is: " << maximum(double1, double2, double3);
	
	cout << "\n\nInput three char vakues: ";
	cin >> char1 >> char2 >> char3;
	cout << "The maximum char is: " << maximum(char1, char2, char3);

	return(0);
}
