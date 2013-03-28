#include <iostream>
#include <cstdlib>
#include <exception>
using namespace std;

void throwEccezione();

int main() {

    // Lancio dell'eccezione
    try { 
        cout << "Dal main() si invoca la funzione throwEccezione()" << endl;
        
        throwEccezione();

        cout << "Questo testo non dovrebbe essere stampato" << endl;
    } catch (exception&) {
       cout << "Gestore eccezioni nel main()" << endl;
    }

    cout << "Il programma continua" << endl;

    return(EXIT_SUCCESS);
}

void throwEccezione()
{
    // Lancia una eccezione e la cattura
    try {
        cout << "La funzione throwEccezione() lancia un'eccezione" << endl;

        // Lancia un'istanza della classe standard delle eccezioni exception
        throw exception();

    } catch (exception&) { 
        /* Il gestore delle eccezioni catch, cattura l'eccezione, imposta un
        messaggio di errore, dopodiche' rilancia l'eccezione */
        cout << "Gestore eccezioni nella funzione throwEccezione()" << endl;

        throw; // L'eccezione viene rilanciata 
    }
}
