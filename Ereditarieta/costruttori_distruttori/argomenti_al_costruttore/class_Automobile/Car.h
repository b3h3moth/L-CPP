#ifndef CAR_H
#define CAR_H

#include <string>
#include "Automobile.h"
using namespace std;

/* La classe Car e' una specializzazione della classe Automobile, fornisce come
informazione aggiuntiva il numero delle portiere di una macchina */
class Car : public Automobile
{
    public:
        // Costruttore di default
        Car() { portiere = 0; }

        // Costruttore con argomenti, passati al costruttore della classe base
        Car(string marca_car, int modello_car, int kilometraggio_car, 
                int prezzo_car, int portiere_car) :
            Automobile(marca_car, modello_car, kilometraggio_car, prezzo_car) {
                portiere = portiere_car;
            }

        int getPortiere() const { return portiere; }

    private:
        int portiere;
};

#endif
