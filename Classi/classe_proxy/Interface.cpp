#include "Interface.h"
#include "Implementation.h"

/* Costruttore, inizializzza il puntatore in modo tale che punti a un nuovo
oggetto della classe Implementation */
Interface::Interface(int x) : ptr(new Implementation(x)) {};

void Interface::setValue(int x)
{
    ptr->setValue(x);
}

int Interface::getValue() const
{
    return ptr->getValue();
}

Interface::~Interface()
{
    delete ptr;
}
