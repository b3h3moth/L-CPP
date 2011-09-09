#include <iomanip>
#include <iostream>
using namespace std;

#include "PhoneNumber.h"

// Si ridefinisce l'operatore di inserimento nello stream "<<"
ostream &operator<<(ostream &output, const PhoneNumber &number)
{
	output << " (" << number.areaCode << ") " 
		   << number.exchange << "-" << number.line;

	return output;
}

// Si ridefinisce l'operatore di estrazione dallo stream ">>"
istream &operator>>(istream &input, PhoneNumber &number)
{
	input.ignore();
	input >> setw(3) >> number.areaCode;
	input.ignore(2);
	input >> setw(3) >> number.exchange;
	input.ignore();
	input >> setw(4) >> number.line;

	return input;
}
