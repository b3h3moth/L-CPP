#include <iostream>
using namespace std;

#include "PhoneNumber.h"

int main() 
{
	PhoneNumber telefono;

	cout << "Inserisci il numero telefonico nella forma (123) 456-7890:" << endl;

	cin >> telefono;

	cout << "Il numero di telefono inserito e': " ;

	cout << telefono << endl;

	return(0);
}
