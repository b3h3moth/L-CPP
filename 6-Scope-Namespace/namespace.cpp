#include <iostream>
using namespace std;

/*
Un mamespace definisce un nuovo campo di azione oltre a quello globale
impostato di default; ciascun membro del namespace e' automaticamente 
qualificato dal nome del proprio namespace.

Per qualificato si intende che al nome di ciascun membro del namespace viene
aggiunto un prefisso, formato dal nome del namespace seguito dall'operatore di 
scope '::'.

Caratteristiche di un namespace:
- La definizione non necessariamente dev'essere contigua;
- La definizione può essere contenuta su diversi file;
- Possono essere annidati.
*/

void printSystem();

namespace Linux {
    void printSystem() {
    	cout << "Debian GNU Linux" << endl;
    }
}

int main() {
    // Si utilizza la funzione del namespace Linux
    Linux::printSystem();
    // Lo stesso nome della funzione ma definita globalmente
    printSystem();
    // Equivalente alla precedente. Si usa l'operatore di scope per specificare
    // l'utilizzo del namespace globale.
    ::printSystem();

   return(0);
}

void printSystem() {
    cout << "OpenBSD" << endl;
}

