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
    else {
        cout << "Larghezza invalida, dev'essere > 0" << endl;
        exit(EXIT_FAILURE);
    }
}

void Rectangle::setLenght(double l)
{
    if (l > 0) 
        length = l;
    else {
        cout << "Altezza invalida, dev'essere > 0" << endl;
        exit(EXIT_FAILURE);
    }
}
