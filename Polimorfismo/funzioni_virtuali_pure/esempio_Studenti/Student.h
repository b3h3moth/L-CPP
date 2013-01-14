#ifndef STUDENT_H
#define STUDENT_H

/* La classe Student e' la classe base che definisce talune informazioni su uno
studente. */

class Student
{
    public:
        // Costruttore di default
        Student() { name = "", ID_student = "", year_admitted = 0; }

        // Costruttore
        Student(string n, string id, int year) { set(n, id, year); }

        // Funzione per il settaggio degli attributi dello studente
        void set(string n, string id, int year) {
            name = n;
            ID_student = id;
            year_admitted = year;
        }

        const string getName() const { return name; }
        const string getID() const { return ID_student; }
        const int getYear() const { return year_admitted; }

        // Funzione virtuale pura
        virtual int getRemainingHours() const = 0;

        /* Tale funzione naturalmente deve essere sovrascritta nelle classi
        derivate, tale classe inoltre, avendo una funzione virtuale pura diventa
        una classe base astratta. 
        
        Una classe base astratta e' la classe generica, o di base, da cui altre
        classi deriveranno; si trova in alto nella gerarchia di classi. */

    protected:
        string name;        // Nome dello studente
        string ID_student;  // ID studente
        int year_admitted;  // Anno di ammisssione (o di iscrizione)
};

#endif
