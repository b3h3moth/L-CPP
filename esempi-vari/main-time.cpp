#include <iostream>
using namespace std;

#include "Time.h"

int main() {
	Time oggetto;

	oggetto.setTime(24, 60, 60);
	cout << "Univ. ";
	oggetto.printUniversal();
	cout << "Std.  ";
	oggetto.printStandard();

	oggetto.setTime(99, 99, 99);
	cout << "Univ. ";
	oggetto.printUniversal();
	cout << "Std.  ";
	oggetto.printStandard();
	
	
	oggetto.setTime(18, 30, 00);
	cout << "Univ. ";
	oggetto.printUniversal();
	cout << "Std.  ";
	oggetto.printStandard();

	return(0);
}

