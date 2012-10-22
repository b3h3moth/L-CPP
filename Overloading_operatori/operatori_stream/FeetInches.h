#ifndef FEETINCHES_H
#define FEETINCHES_H

/* feet e inches sono due unita' di misura, utilizzate principalmente nei paesi
anglosassoni; la classe FeetInches serve appunto per misurare le distanze 
espresse in feet ed inches. 
*/

#include <iostream>
using namespace std;

class FeetInches
{
    public:
        // Costruttore
        FeetInches(int f, int i);

        void setFeet(int f) { feet = f; };
        void setInches(int i) { inches = i;};
        int getFeet() const { return feet; };
        int getInches() const { return inches; };

        // Ridefinizione degli operatori inserimento ed estrazione sullo stream
        friend ostream &operator<<(ostream &stream, const FeetInches &obj);
        friend istream &operator>>(istream &stream, const FeetInches &obj);

    private:
        int feet;
        int inches;

        void simplify();
};

#endif
