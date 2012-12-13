#ifndef AUTOMOBILE_H
#define AUTOMOBILE_H

#include <string>
using namespace std;

/* La classe Automobile e' la classe base, ossia la generalizzazione dell'
oggetto automobile del mondo reale, e' la base su cui altre classi possono
specializzarsi con proprieta' proprie; nel caso specifico un oggetto automobile
e' caratterizzato dalla marca, dal modello, dal kilometraggio e dal prezzo.

L'esempio e' posto in essere per verificare il passaggio di argomenti dal
costruttore della classe derivata al costruttore della classe base, che sara'
implementato nelle classi derivate. */
class Automobile
{
    public:
        // Costruttore di default
        Automobile() 
        {
            marca = "";
            modello = 0;
            kilometraggio = 0;
            prezzo = 0.0;
        }

        // Costruttore con argomenti definiti dall'utente
        Automobile(string marca_auto, int modello_auto, 
                   int kilometraggio_auto, double prezzo_auto)
        {
            marca = marca_auto;
            modello = modello_auto;
            kilometraggio = kilometraggio_auto;
            prezzo = prezzo_auto;
        }

        string getMarca() const { return marca; }
        int getModello() const { return modello; }
        int getKilometraggio() const { return kilometraggio; }
        double getPrezzo() const { return prezzo; }

    private:
        string marca;
        int modello;
        int kilometraggio;
        double prezzo;
};

#endif
