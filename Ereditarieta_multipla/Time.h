#ifndef TIME_H
#define TIME_H

class Time 
{
    public:
        // Costruttore di default
        Time(int h, int mi, int s) { hour = 0; min = 0; sec = 0; }

        // Costruttore
        Time(int h, int mi, int s) { hour = h; min = mi; sec = s; }

        int getHour() const { return hour; }
        int getMin() const { return min; }
        int getSec() const { return sec; }

    protected:
        int hour;
        int min;
        int sec;
};

#endif
