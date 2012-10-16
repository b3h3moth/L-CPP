#ifndef FEETINCHES_H
#define FEETINCHES_H

/* feet e inches sono due unita' di misura, utilizzate principalmente nei paesi
anglosassoni; la classe FeetInches serve appunto per misurare le distante 
espresse in feet ed inches. */

class FeetInches
{
    public:
        // Costruttore
        FeetInches(int f, int i);

        void setFeet(int f) { feet = f; };
        void setInches(int i) { inches = i;};
        int getFeet() const { return feet; };
        int getInches() const { return inches; };

        // Operatori '+', '-' ridefiniti
        FeetInches operator+(const FeetInches &right);
        FeetInches operator-(const FeetInches &right);

    private:
        int feet;
        int inches;

        void simplify();
};

#endif
