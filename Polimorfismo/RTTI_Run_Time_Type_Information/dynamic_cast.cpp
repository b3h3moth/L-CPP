#include <iostream>
#include <cstdlib>
using namespace std;

/* RTTI (Run-Time Type Identification, Identificazione dei tipi a tempo di 
esecuzione), consente a programmi che manipolano oggetti come puntatori o 
riferimenti a classi base, di determinare l'effettivo tipo derivato a cui essi
si riferiscono.

dynamic_cast, consente la conversione di un puntatore ad una classe base in un
puntatore ad una classe derivata, oppure un lvalue che si riferisce ad una 
classe base in un riferimento a una classe derivata; affinche' le informazioni
sul tipo della classe derivata possano essere rilevate, e' necessario che
l'operando di dynamic_cast dev'essere una classe con una o piu' funzioni
virtuali.

Nota: La conversione di un puntatore a una classe base in un puntatore a una
      classe derivata e' detto "downcasting" oppure anche "upcasting", poiche' 
      si intende eseguire il casting da un antenato a un discendente.
*/

class Animale
{
    public:
        virtual void verso() = 0;
        
        // Distruttore
        virtual ~Animale() {};
};

class Cane : public Animale
{
    public:
        void verso() { cout << "Il cane abbaia" << endl; };
        void caratteristica() { cout << "Il cane e' fedele" << endl; };
};

class Gatto : public Animale
{
    public:
        void verso() { cout << "Il gatto miagola" << endl; };
        void costo() { cout << "Il persiano e' un gatto costoso" << endl; }
};

void TipoDiAnimale(Animale *panimale)
{
    Cane *pcane     = dynamic_cast<Cane*>(panimale);
    Gatto *pgatto    = dynamic_cast<Gatto*>(panimale);

    if (pcane) {
        cout << "Sono un cane" << endl;
        pcane->caratteristica();
    }

    if (pgatto) {
        cout << "Sono un gatto" << endl;
        pgatto->costo();
    }

    cout << "Verifica del tipo usando virtual Animale::verso " << endl;
    panimale->verso();
}


int main() {
    Cane cane;
    Gatto gatto;

    TipoDiAnimale(&cane);
    cout << endl;
    TipoDiAnimale(&gatto);

    return(EXIT_SUCCESS);
}
