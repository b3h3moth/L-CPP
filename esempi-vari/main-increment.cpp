#include <iostream>
using namespace std;

#include "Increment.h"

int main() {
	Increment oggetto(100, 50);

	cout << "before incrementing: ";
	oggetto.print();

	for (int j=1; j<=3; j++)
	{
		oggetto.addIncrement();
		cout << "after increment: " << j << ": ";
		oggetto.print();
	}
	
	return(0);
}

