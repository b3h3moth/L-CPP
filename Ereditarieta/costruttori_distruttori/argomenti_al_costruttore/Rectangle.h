#ifndef RECTANGLE_H
#define RECTANGLE_H

/* Si sta realizzando questa classe per capire l'ordine di chiamata dei 
costruttori di classe base e di classe derivata allorquando ci sono anche degli
argomenti passati ai costruttori stessi.  */
class Rectangle
{
    public:
        // Costrruttore di default
        Rectangle() { width = 0.0; length = 0.0; }

        // Costruttore con argomenti
        Rectangle(double w, double l) { width = w; length = l; }

        double getWidth() const { return width; }
        double getLength() const { return length; }
        double getArea() const { return width * length; }

    private:
        double width;
        double length;
};

#endif
