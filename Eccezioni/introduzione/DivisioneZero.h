#ifndef DIVISIONEZERO_H
#define DIVISIONEZERO_H

#include <stdexcept>
using std::runtime_error;

/* Lo scopo e' di prevenire la divisione per zero, che in C++, qualora dovesse
accadere, provocherebbe la terminazione del programma; la classe DivisioneZero
si occupa della gestione dell'eccezione.

La classe runtime_error della libreria standard e' una specializzazione della 
classe exception, si occupa della gestione degli errori a runtime (tempo di 
esecuzione), mentre la classe DivisioneZero e' a sua volta una specializzazione
della classe runtime_error.

La classe exception e' la classe base, o superclasse, delle eccezioni in C++,
l'header di riferimento e' <stdexcept>.
*/


class DivisioneZero : public runtime_error
{
    public:
        // Il costruttore si occupa della definizione del messaggio d'errore
        DivisioneZero() : runtime_error("Divisione per 0") {}
};

#endif
