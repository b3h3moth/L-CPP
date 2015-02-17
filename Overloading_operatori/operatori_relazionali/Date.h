#ifndef DATE_H
#define DATE_H

class Date
{
    public:
        // Costruttore
        Date(int d, int m, int y);

        // Ridefinizione operatori relazionali
        bool operator==(Date &d);
        bool operator>(Date &d);
        bool operator<(Date &d);

    private:
        int day;
        int month;
        int year;
};

#endif
