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

        /* modello di gestione delle eccezioni con terminazione, vale a dire che
        conclusa l'eccezione il controllo tornera' alla prima istruzione 
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
    if (denominatore == 0)
        /* throw lancia una eccezione DivisioneZero se si tenta di dividere 
        per 0. L'operando di throw e' un oggetto che sara' utilizzato per 
        l'inizializzazione del parametro di catch; l'esecuzione della funzione 
        quoziente terminera' in questo punto. */
        throw "Err: divisione per zero\n"; // Punto di lancio (throw point)

    // Restituisce il risultato della divisione, se tutto procede correttamente
    return static_cast<double>(numeratore) / denominatore;
}
