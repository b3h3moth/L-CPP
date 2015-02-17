#ifndef COMMISSIONEMPLOYEE_H
#define COMMISSIONEMPLOYEE_H

#include <string>
using namespace std;

// Classe base che identifica un agente di vendita con provvigioni
class CommissionEmployee
{
    public:
        CommissionEmployee(const string &first, const string &last, 
                const string &ssn, double sales = 0.0, double rate = 0.0);
        
        void setFirstName(const string &first);
        string getFirstName() const;
        void setLastName(const string &last);
        string getLastName() const;
        void setSSN(const string &ssn);
        string getSSN() const;
        
        // Imposta il totale delle vendite
        void setGrossSales(double sales);
        double getGrossSales() const;

        // Imposta la percentuale delle vendite
        void setCommissionRate(double rate);
        double getCommissionRate() const;

        /* Calcola la retribuzione dell'agente di vendita

        Nelle funzioni virtuali il tipo dell'oggetto puntato, e non il tipo di
        handle, determina quale funzione utilizzare, detto in parole povere, una
        funzione virtuale viene dinamicamente associata alla chiamata di una 
        funzione, dinamic binding.

        Dinamic Binding
        ---------------
        Il C++ col dinamic binding riesce a determinare a runtime, verificando 
        il tipo dell'oggetto responsabile della chiamata, quale funzione
        utilizzare. 

        Il polimorfismo si realizza invocando una funzione virtuale attraverso
        un puntatore o un riferimento alla classe base; il C++ determinera'
        dinamicamente la versione corretta della funzione da adoperare nella 
        classe derivata.
       
        In definitiva, cio' che dev'essere chiaro e' che e' il tipo dell'oggetto
        chiamante l'attore principale e cio' a cui si deve fare attenzione.
        
        Una funzione virtuale si dichiara aggiungendo la parola chiave 'virtual'
        prima del tipo di ritorno nelle dichiarazioni delle funzioni della
        classe base.  */
        
        // Calcola la retribuzione dell'agente di vendita
        virtual double earnings() const;
        virtual void print() const;

    private:
        string first_name;
        string last_name;
        string social_security_number;  // Numero INPS
        double gross_sales;             // totale delle vendite
        double commission_rate;         // percentuale delle vendite
};

#endif
