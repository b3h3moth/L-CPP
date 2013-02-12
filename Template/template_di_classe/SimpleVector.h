#ifndef SIMPLEVECTOR_H
#define SIMPLEVECTOR_H

#include <iostream>
#include <new>
#include <cstdlib>
using namespace std;

/* I Template di classe possono essere utilizzati per creare classi generiche
o tipi di dato astratti */
template<class T>
class SimpleVector
{
    public:
        // Costruttore di default
        SimpleVector() { array = 0; array_size = 0; }

        // Costruttore
        SimpleVector(int size);
        
        // Costruttore di copia
        SimpleVector(const SimpleVector &obj);
        
        // Distruttore
        ~SimpleVector();

        // Ritorna la dimensione dell'array
        int size() const { return array_size; }
        
        // Ritorna una specifico elemento dell'array
        T getElement(int position);
        
        // Ridefinizione dell'operatore []
        T &operator[](const int &);

    private:
        T *array;           // Punta all'array allocato
        int array_size;     // Numero degli elementi dell'array
        void memError();    // Errore nell'allocazione della memoria
        void subError();    // Errore dei limiti dell'array
};

/* Costruttore
Imposta la grandezza dell'array e alloca la memoria necessaria */
template<class T>
SimpleVector<T>::SimpleVector(int size)
{
    array_size = size;

    // Alloca la memoria
    try {
        array = new T[size];
    } catch (bad_alloc) {
        memError();
    }

    // Inizializza l'array
    for(int i=0; i<array_size; i++)
        *(array + i) = 0;
}

// Costruttore di copia
template<class T>
SimpleVector<T>::SimpleVector(const SimpleVector &obj)
{
    // Copia la dimensione dell'array
    array_size = obj.array_size;

    // Alloca la memoria per l'array
    array = new T[array_size];

    if (array == 0)
        memError();

    // Copia gli elementi dell'array obj
    for (int i=0; i<array_size; i++)
        *(array + i) = *(obj.array +i);
}

// Distruttore
template<class T>
SimpleVector<T>::~SimpleVector()
{
    // Dealloca la memoria assegnata all'array
    if (array_size > 0)
        delete [] array;
}

/* La funzione memError() visualizza un messaggio di errore e termina il
programma allorquando l'allocazione della memoria fallisce */
template<class T>
void SimpleVector<T>::memError() 
{
    cout << "ERRORE: Non e' possibile allocare memoria" << endl;
    exit(EXIT_FAILURE);
}

/* La funzione subError() visualizza un messaggio di errore e termina il
programma allorquando subscript dovesse andare fuori dai limiti */
template<class T>
void SimpleVector<T>::subError() 
{
    cout << "ERRORE: subscript fuori dai limiti" << endl;
    exit(EXIT_FAILURE);
}

/* La funzione getElement() ritorna uno specifico elemento dell'array, ossia il
valore contenuto in subscript, l'argomento infatti e' subscript stesso. */
template<class T>
T SimpleVector<T>::getElement(int sub)
{
    if (sub < 0 || sub >= array_size)
        subError();

    return array[sub];
}

/* Ridefinizione dell'operatore []. 
Ritorna un riferimento all'elemento indicizzato da subscript nell'array,
l'argomento infatti e' subscript. */
template<class T>
T &SimpleVector<T>::operator[](const int &sub)
{
    if (sub < 0 || sub >= array_size)
        subError();

    return array[sub];
}

#endif
