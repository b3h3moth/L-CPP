#ifndef DATETIME_H
#define DATETIME_H

#include <string>
using namespace std;

#include "Date.h"
#include "Time.h"

/* La classe DateTime e' una specializzazione sia della classe Date sia della
classe Time; sintatticamente per far si che una classe erediti da due classi
base, esse devono essere inserite l'una di seguito all'altra con lo 
specificatore d'accesso della classe. */

class DateTime : public Date, public Time
{
    public:
        // Costruttore di default
        DateTime();
        
        // Costruttore
        DateTime(int d, int mo, int y, int h, int mi, int s);

        // Visualizzazione della data completa
        void showDateTime() const;
};

#endif
