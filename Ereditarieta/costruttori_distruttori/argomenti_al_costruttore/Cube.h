#ifndef CUBE_H
#define CUBE_H

#include "Rectangle.h"

/* La classe Cube e' una specializzazione della classe Rectangle */
class Cube : public Rectangle
{
    public:
        // Costruttore di default
        Cube() : Rectangle() { height = 0.0; volume = 0.0; }

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
