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

Tali funzioni possono essere o funzioni membro o funzioni globali, nel qual
caso conviene renderle 'friend':

- Se una funzione operatore e' implementata come una funzione membro, il 
left-operand dev'essere o un oggetto o un riferimento all'oggetto della classe 
operatore;

- Se invece nel left-operand vi e' un oggetto diverso o un valore di uno dei 
tipi fondamentali, la funzione operatore deve essere resa globale.


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
