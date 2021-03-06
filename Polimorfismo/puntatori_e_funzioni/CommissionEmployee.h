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

        // Calcola la retribuzione dell'agente di vendita
        double earnings() const;

        void print() const;

    private:
        string first_name;
        string last_name;
        string social_security_number;  // Numero INPS
        double gross_sales;             // totale delle vendite
        double commission_rate;         // percentuale delle vendite
};

#endif
