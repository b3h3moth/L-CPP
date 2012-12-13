#ifndef TRUCK_H
#define TRUCK_H

#include <string>
#include "Automobile.h"
using namespace std;

/* La class Truck e' una specializzazione della class Automobile, fornisce come
informazione aggiuntiva il tipo di guida, se con 2 o 4 ruote motrici */
class Truck : Automobile
{
    public:
        // Costruttore di default
        Truck() { ruote_motrici = ""; }

        // Costruttore con argomenti, passati al costruttore della classe base
        Truck(string marca_rm, int modello_rm, int kilometraggio_rm,
                double prezzo_rm, string rm) :
            Automobile(marca_rm, modello_rm, kilometraggio_rm, prezzo_rm) {
                ruote_motrici = rm;
            }

        int getRuoteMotrici() const { return ruote_motrici; }

    private:
        string ruote_motrici;
};

#endif
