#include <iostream>
#include <cstring>
using namespace std;

#include "Unix.h"

// Costruttore di default
Unix::Unix(char *k_name, char *k_rel)
{
    kernel_name = new char[strlen(k_name) + 1];
    kernel_release = new char[strlen(k_rel) + 1];

    strcpy(kernel_name, k_name);
    strcpy(kernel_release, k_rel);
}

/* Il distruttore, in questo caso libera lo spazio di memoria per gli array
allocati dal costruttore, ed e' proprio questa l'utilita', ossia fornire un
mezzo con cui "far pulizia". */
Unix::~Unix()
{
    delete [] kernel_name;
    delete [] kernel_release;
}
