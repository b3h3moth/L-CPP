#ifndef CUBE_H
#define CUBE_H

#include "Rectangle.h"

/* La classe Cube e' una specializzazione della classe Rectangle */
class Cube : public Rectangle
{
    public:
        // Costruttore di default
        Cube() : Rectangle() { height = 0.0; volume = 0.0; }

        /* Si noti l'utilizzo del costruttore della classe derivata seguito dal
        costruttore della classe base. In fase di esecuzione, il costruttore 
        della classe derivata Cube() invochera' anzitutto il costruttore della 
        classe base Rectangle(), al quale, come nel secondo costruttore, possono
        essere passati degli argomenti. 
       
        Da notare che in questo caso il costruttore della classe derivata e'
        stato implementato inline, se si fosse optato per una definizione
        esterna alla classe, il prototipo del costruttore sarebbe stato:
        
        Cube(double w, double, l, double h);
        
        La definizione invece sarebbe stata:
        
        Cube::Cube(double w, double l, double h) : Rectangle(w, l) { 
            height = h;
            volume = getArea() * h; }

        Il costruttore della classe base e' sempre eseguito prima del
        costruttore della classe derivata. 
        */

        // Costruttore con argomenti
        Cube(double w, double l, double h) : Rectangle(w, l) { 
            height = h;
            volume = getArea() * h; }

        double getHeight() const { return height; }
        double getVolume() const { return volume; }

    protected:
        double height;
        double volume;
};

#endif
