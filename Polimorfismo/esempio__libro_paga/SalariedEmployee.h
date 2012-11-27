#ifndef SALARIED_H
#define SALARIED_H

#include "Employee.h"

// Classe derivata concreta
class SalariedEmployee : public Employee 
{
    public:
        SalariedEmployee( const string &, const string &, 
                const string &, double = 0.0 );
        
        void setWeeklySalary( double );
        double getWeeklySalary() const;

        /* Poiche' sono state dichiarate viruali nella classe base, sarebbe
        superfluo scrivere nuovamente la parola chiave virtual anche nella
        classe derivata concreta, tuttavia e' buona farlo. */
        virtual double earnings() const;
        virtual void print() const;
    
    private:
        double weeklySalary;
};

#endif
