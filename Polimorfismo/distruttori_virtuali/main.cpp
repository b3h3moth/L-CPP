#include <iostream>
#include <cstdlib>
using namespace std;

/* Allorquando si progetta una classe con costruttori, che si presume diventera'
classe base, e' consigliabile dichiarare tali costruttori come virtuali, questo
perche' il compilatore compilera' staticamente quei distruttori non dichiarati
virtual. */

// Classe base
class Animal
{
    public:
        // Costruttore
        Animal() { cout << "costruttore Animal in esecuzione" << endl; }
        
        // Distruttore
        virtual ~Animal() { cout << "distruttore Animal in esecuzione" << endl;}
        
        /* Da notare che se tale distruttore non fosse stato dichiarato virtual,
        in fase di esecuzione il distruttore della classe derivata non sarebbe
        stato invocato, cosi facendo invece si ottiene una compilazione dinamica
        del distruttore, per cui quando un oggetto Cat (classe derivata) sara'
        distrutto, sara' invocato sia il costruttore della classe derivata 
        sia il costruttore della classe base. 

        Anche nel caso dei distruttori virtuali vale la regola delle funzioni
        virtuali, ovvero che quando una funzione della classe base e' dichiarata
        virtuale, tutte le versioni sovrascritte (overriden) nelle classi 
        derivate diventano anch'esse virtuali.
        
        Una buona pratica di programmazione da seguire e' che se una classe ha
        una funzione virtuale deve avere anche un costruttore virtuale. */
};

// La classe Cat e una classe derivata da Animal 
class Cat : public Animal
{
    public:
        // Costruttore
        Cat() : Animal() { cout << "costruttore Cat in esecuzione" << endl; }

        // Distruttore
        ~Cat() { cout << "distruttore Cat in esecuzione" << endl; }
};


int main() {
    // Si crea un oggetto Cat, referenziato da un puntatore ad Animal
    Animal *my_animal = new Cat;

    delete my_animal;
    
    return(EXIT_SUCCESS);
}
