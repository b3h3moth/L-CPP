#ifndef SUV_H
#define SUV_H

#include <string>
#include "Automobile.h"
using namespace std;

/* La class Suv e' una specializzazione della class Automobile, fornisce come
informazione aggiuntiva il numero dei passeggeri */
class Suv : public Automobile
{
    public:
        // Costruttore di default
        Suv() { passeggeri = 0; }

        // Costruttore con argomenti, passati al costruttore della classe base
        Suv(string marca_suv, int modello_suv, int kilometraggio_suv,
                int prezzo_suv, int passeggeri_suv) :
            Automobile(marca_suv, modello_suv, kilometraggio_suv, prezzo_suv) {
                passeggeri = passeggeri_suv;
            }

        int getPasseggeri() const { return passeggeri; }

    private:
        int passeggeri;
};

#endif
