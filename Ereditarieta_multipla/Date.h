#ifndef DATE_H
#define DATE_H

class Date
{
    public:
        // Costruttore di default
        Date(int d, int mo, int y) { day = 1; month = 1; year = 2000; }

        // Costruttore
        Date(int d, int mo, int y) { day = d; month = mo; year = y; }

        int getDay() const { return day; }
        int getMonth() const { return month; }
        int getYear() const { return year; }

    protected:
        int day;
        int month;
        int  year;
};

#endif
