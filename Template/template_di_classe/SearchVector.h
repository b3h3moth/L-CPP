/* Si implementa l'ereditarieta' mediante template; la classe SearchVector e'
una classe derivata da SimpleVector, se ne deduce che un  template di classe
puo' derivare da un alro template di classe. */

#ifndef SEARCHVECTOR_H
#define SEARCHVECTOR_H
#include "SimpleVector.h"

template<class T>
class SearchVector : public SimpleVector<T>
{
    public:
        // Costruttore di default
        SearchVector() : SimpleVector<T>() {}
        // Costruttore
        SearchVector(int size) : SimpleVector<T>(size) { }
        // Costruttore di copia
        SearchVector(const SearchVector &obj);

        int findItem(const T item);
};

// Costruttore di copia
template<class T>
SearchVector<T>::SearchVector(const SearchVector &obj) : 
    SimpleVector<T>(obj.size())
{
    for (int i=0; i<this->size(); i++)
        this->operator[](i) = obj[i];
}

/* La funzione findItem() cerca un elemento, se lo trova ritorna il relativo
subscript, altrimenti -1 */
template<class T>
int SearchVector<T>::findItem(const T item)
{
    for (int i=0; i<this->size(); i++) {
        if (SimpleVector<T>::getElement(i) == item)
            return i;
    }
    return -1;
}

#endif
