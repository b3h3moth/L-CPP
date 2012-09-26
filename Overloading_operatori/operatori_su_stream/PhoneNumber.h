#ifndef PHONENUMBER_H
#define PHONENUMBER_H

#include <string>
using namespace std;

/* Per ottenere l'overload e' necessario creare una funzione il cui "nome" 
corrisponde alla parola chiave 'operator' seguita dall'operatore da ridefinire,
inoltre gli argomenti della funzione devono concordare con gli operandi dell'
operatore, e nello stesso ordine, ossia left-operand e right-operand.

Ad esempio: 
operator+(left-operand, right-operand);

Tali funzioni possono essere sia funzioni membro sia funzioni globali, nel qual
caso conviene renderle 'friend'.
*/

class PhoneNumber
{
    friend ostream &operator<<(ostream &output, const PhoneNumber &number);
    friend istream &operator>>(istream &input, PhoneNumber &number);
    
    private:
       string areaCode;	// prefisso
       string exchange;	// prime 3 cifre
       string line;	// ultime 4 cifre
};

#endif
