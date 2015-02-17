#include <iostream>
#include <cstdlib> 
using namespace std;

#include "Rectangle.h"

Rectangle::Rectangle(double w, double l)
{
    width = w;
    length = l;
}

void Rectangle::setWidth(double w)
{
    if (w > 0)
        width = w;
    else
        /* Il valore negativo di w causa alla creazione di una istanza della
        classe ExceptionNegativeSize e al lancio dell'eccezione */
        throw ExceptionNegativeSize();
}

void Rectangle::setLenght(double l)
{
    if (l > 0) 
        length = l;
    else
        /* Il valore negativo di l causa alla creazione di una istanza della
        classe ExceptionNegativeSize e al lancio dell'eccezione */
        throw ExceptionNegativeSize();
}
