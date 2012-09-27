#include <iostream>
using namespace std;

#include "PhoneNumber.h"

int main() {
	PhoneNumber ogg;
	cout << "Enter phonenumber in form (111) 111-1111:" << endl;
	cin >> ogg;
	cout << "The phone number is: ";
	cout << ogg << endl;

	return(0);
}

