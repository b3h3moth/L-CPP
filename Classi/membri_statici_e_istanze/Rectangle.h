#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle
{
    public:
        Rectangle(double w, double l);

        void setWidth(double w);
        void setLenght(double l);
        double getWidth() const { return width; };
        double getLenght() const { return length; };
        double getArea() const { return width * length; };

    private:
        double width;
        double length;
};

#endif
