#include <cstdlib>
#include <iostream>
using namespace std;

#include "DivisioneZero.h"

double quoziente(int numeratore, int denominatore);

int main() {
    int num1, num2;
    double risultato;

    cout << "Inserire due numeri interi (^C quit): ";

    while (cin >> num1 >> num2) {
        
        /* Il blocco try, all'interno del quale l'eccezione si puo' verificare o
        meno. Se durante l'esecuzione di una istruzione si dovesse verificare 
        un'eccezione, l'esecuzione del blocco terminera' immediatamente, 
        trasferendo il controllo al primo gestore delle eccezioni (catch) che 
        potra' elaborarla. */
        try {
            risultato = quoziente(num1, num2);
            cout << "Risultato: " << risultato << endl;
        }

        /* catch() si occupa invece della effettiva cattura e gestione 
        dell'eccezione, specificando tra parentesi un unico parametro che indica
        il tipo di eccezione da elaborare; pertanto l'opportuno gestore delle
        eccezioni viene scelto confrontando il parametro di catch con il tipo
        dell'eccezione. */
        catch (DivisioneZero &DivisioneZero) {
            cout << "Eccezione: " << DivisioneZero.what() << endl;
        }

        /* conclusa l'eccezione il controllo torna alla prima istruzione 
        successiva al gestore catch. */
        
        cout << "Inserire due numeri interi (^C quit): ";
    }

    cout << endl;

    return(EXIT_SUCCESS);
}

/* La funzione quoziente, si occupera' sia della eventuale divisione sia del
lancio dell'eccezione. */
double quoziente(int numeratore, int denominatore)
{
    // Lancia una eccezione DivisioneZero se si tenta di dividere per 0
    if (denominatore == 0)
        throw DivisioneZero();

    // Restituisce il risultato della divisione, se tutto procede correttamente
    return static_cast<double>(numeratore) / denominatore;
}
