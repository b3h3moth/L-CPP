#ifndef CLASS_H
#define CLASS_H

class Debian
{
    public:
        // Costrutore di default
        Debian();
        Debian(string s, string t);

        void setStableDistro(string s);
        void setTestingDistro(string t);
        string getStableDistro();
        string getTestingDistro();

    private:
        string stable;
        string testing;
};

#endif
