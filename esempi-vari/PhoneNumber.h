#ifndef PHONENUMBER_H
#define PHONENUMBER_H

#include <string>
using namespace std;

// Classe al fine di una introduzione allo studio della ridefinizione degli
// operatori
class PhoneNumber
{
	friend ostream &operator<<(ostream &output, const PhoneNumber &number);
	friend istream &operator>>(istream &input, PhoneNumber &number);

	private:
		string areaCode;	// prefisso
		string exchange;	// prime 3 cifre
		string line;		// ultime 4 cifre
};

#endif
