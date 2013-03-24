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
        meno; quando si verifica un'eccezione all'interno di tale blocco, essa
        sara' intercettata dal gestore delle eccezioni catch(). */
        try {
            risultato = quoziente(num1, num2);
            cout << "Risultato: " << risultato << endl;
        }

        /* catch() si occupa invece della effettiva cattura e gestione 
        dell'eccezione, specificando tra parentesi un unico parametro che indica
        il tipo di eccezione da elaborare. */
        catch (DivisioneZero &DivisioneZero) {
            cout << "Eccezione: " << DivisioneZero.what() << endl;
        }
        
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
