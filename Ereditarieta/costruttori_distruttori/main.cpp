#include <iostream>
#include <cstdlib>
using namespace std;

/* Questo semplice e banale programma dimostra l'ordine di chiamata del 
costruttore di classe base e di classe derivata e del distruttore di classe 
base e di classe derivata:

- Il costruttore di classe base viene chiamato prima del costruttore di classe 
  derivata;

- I distruttori sono chiamati in ordine inverso, prima quello di classe derivate
  e poi quello di classe base.
*/

class Base {
    public:
        // Costruttore
        Base() { cout << "Costruttore di classe base" << endl; };

        // Distruttore
        ~Base() { cout << "Distruttore di classe base" << endl; };
};

class Derivata : public Base {
    public:
        // Costruttore
        Derivata() { cout << "Costruttore di classe derivata" << endl; };
        
        // Distruttore
        ~Derivata() { cout << "Distruttore di classe derivata" << endl; };
};

int main() {
    cout << "--- Si crea un oggetto di classe Derivata ---" << endl;

    Derivata obj;

    cout << "--- Conclusione del programma ---" << endl;
    return(EXIT_SUCCESS);
}
