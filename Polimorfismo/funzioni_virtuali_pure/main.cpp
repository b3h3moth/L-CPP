#include <iostream>
#include <cstdlib>
using namespace std;

/* Una classe base astratta contiene una o piu' funzioni virtuali pure, ed il
suo scopo primario e' di essere utilizzata come classe base in una gerarchia di
classi.

La classe Account e' una classe base astratta.*/
class Account
{
    public:
        /* Le funzioni virtuali pure sono funzioni virtuali senza
        implementazione ed inizializzate a 0; da notare che l'operatore di 
        assegnamento combinato con lo 0 (=0) formano lo specificatore di 
        purezza. */
        virtual string getAccess() const = 0;
        virtual void setAccess(string str) = 0;
        virtual void print() = 0;
};

/* Una classe concreta eredita tutte le funzioni virtuali della classe base 
astratta, con l'obbligo di riscrivere (overriding) ciascuna funzione virtuale 
pura, che nella classe base astratta non è completa.

La classe User e' una classe concreta. */
class User : public Account
{
    public:
        virtual string getAccess() const { return username;}
        virtual void setAccess(string str) { username = str; }
        virtual void print() { cout << " User: " << this->getAccess() << endl;}
    private:
        string username;
};

// La classe Admin e' una classe concreta.
class Admin : public Account
{
    public:
        virtual string getAccess() const { return username;}
        virtual void setAccess(string str) { username = str; }
        virtual void print() { cout << "Admin: " << this->getAccess() << endl;}
    private:
        string username;
};

int main() {
    /* Se si istanziasse un oggetto di una classe astratta il compilatore
    restituirebbe un errore (GCC 4.4.5):

    Account object;
    
    error: cannot declare variable 'object' to be of abstract type 'Account'
    note: because the following virtual functions are pure within ‘Account’:
    note:  virtual std::string Account::getAccess() const
    note:  virtual void Account::setAccess(std::string)
    note:  virtual void Account::print()
   
    E' consentito invece dichiarare puntatori e riferimenti ad oggetti di una 
    classe astratta: */
   
    Account *ptr_acc;   // Puntatore alla classe base astratta Account
    User obj_der;       // Istanziazione oggetto di classe concreta User
    Admin obj_der2;     // Istanziazione oggetto di classe concreta Admin

    ptr_acc = &obj_der; /* Si assegna l'indirizzo di un oggetto della classe
                           concreta ad un puntatore alla classe base astratta */

    ptr_acc->setAccess("luca");
    ptr_acc->print();

    ptr_acc = &obj_der2;

    ptr_acc->setAccess("b3h3m0th");
    ptr_acc->print();

    return(EXIT_SUCCESS);
}
