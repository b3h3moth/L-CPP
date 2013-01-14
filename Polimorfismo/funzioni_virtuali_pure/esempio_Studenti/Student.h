#ifndef STUDENT_H
#define STUDENT_H

class Student
{
    public:
        // Costruttore di default
        Student() { name = "", id = "", year_admitted = 0; }

        // Costruttore
        Student(string n, string id, year) { set(n, id, year); }

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

    protected:
        string name;        // Nome dello studente
        string ID_student;  // ID studente
        int year_admitted;  // Anno di ammisssione (o di iscrizione)
};

#endif
