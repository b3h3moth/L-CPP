#include <iomanip>
#include <iostream>
using namespace std;

#include "PhoneNumber.h"

/*
Il C++ consente l'overload - la ridefinizione - degli operatori in modo tale da
renderli sensibili al contesto in cui sono utilizzati, in campo matematico ad
esempio e' particolarmente utilizzata; da notare che non e' consentito creare 
nuovi operatori da zero, poiche' e' possibile ridefinire solo quelli esistenti.

La ridefinizione e' consentita:
Solo per le operazioni che interessano i nuovi tipi di dato creati dall'utente.

La ridefinizione non e' consentita:
Sugli operatori che lavorano con i tipi predefiniti.

Possono essere ridefiniti tutti gli operatore tranne: 
'.', '.*', '::', '?:', 'sizeof'.

La ridefinizione di un operatore non modifica:
- la precedenza;
- l'associativita';
- il numero degli operandi.
*/


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
