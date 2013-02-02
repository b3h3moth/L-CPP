#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

/* The "Slicing problem"
Quando un oggetto di una classe derivata viene assegnato a una variabile della
classe base, tutti i dati membro della classe base che non sono stati ereditati
dalla classe derivata - ossia tutti i nuovi dati membro della classe derivata -
andranno persi nell'assegnamento, stesso discorso per le funzioni membro.

Nota: Leteralmente sta per "tagliare a fette", per cui nel caso specifico ad
      essere tagliati fuori sono i dati e le funzioni membro della classe 
      derivata non ereditati dalla classe base.

Il problema non si risolve rendendo semplicemente una funzione membro come 
virtuale, ma piuttosto utilizzando al contempo, oltre alle funzioni virtuali, 
puntatori e variabili dinamiche.
*/


class Animale
{
    public:
        string nome;
        virtual void print() const;
};

class Cane : public Animale
{
    public:
        string razza;
        virtual void print() const;
};


int main() {
    Cane vcane;
    Animale vanimale;

    vcane.nome = "Luna";
    vcane.razza = "Pastore tedesco";
    vanimale = vcane;

    cout << "Slicing problem" << endl;
    // vanimale.razza;          error: class Animale has no member named razza
    
    /* vanimale e' un oggetto della classe base, per cui invochera' la funzione
    della classe base */
    vanimale.print();

    // Soluzione "Slicing Problem"
    cout << "\nSoluzione dello Slicing problem" << endl;
    Cane *pcane;
    Animale *panimale;

    pcane = new Cane;
    pcane->nome = "Peppino";
    pcane->razza = "PitBull";
    panimale = pcane;

    /* Entrambe le funzioni stamperanno i medesimi dati, quelli riferiti 
    alla funzione membro della classe derivata */
    panimale->print();
    pcane->print(); // medesimo output


    return(EXIT_SUCCESS);
}

void Cane::print() const
{
    cout << " nome (Cane): " << nome << endl;
    cout << "razza (Cane): " << razza << endl;
}

void Animale::print() const
{
    cout << " nome (Animale): " << nome << endl;
}
