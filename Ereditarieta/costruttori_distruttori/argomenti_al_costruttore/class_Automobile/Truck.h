#ifndef TRUCK_H
#define TRUCK_H

#include <string>
#include "Automobile.h"
using namespace std;

/* La class Truck e' una specializzazione della class Automobile, fornisce come
informazione aggiuntiva il tipo di guida, se con 2 o 4 ruote motrici */
class Truck : public Automobile
{
    public:
        // Costruttore di default
        Truck() { ruote_motrici = ""; }

        // Costruttore con argomenti, passati al costruttore della classe base
        Truck(string marca_trk, int modello_trk, int kilometraggio_trk,
                double prezzo_trk, string rm) :
            Automobile(marca_trk, modello_trk, kilometraggio_trk, prezzo_trk) {
                ruote_motrici = rm;
            }

        string getRuoteMotrici() const { return ruote_motrici; }

    private:
        string ruote_motrici;
};

#endif
