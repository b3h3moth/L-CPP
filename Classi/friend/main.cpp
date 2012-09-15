#include <iostream>
#include <string>
using namespace std;

class Account {

    /* Una funzione friend, pur essendo definita all'esterno dell'ambito di 
    visibilita' di una classe, puo' accedere alla parte privata della classe, 
    oltre naturalmente che a quella pubblica. */
    friend void setUsername(Account &, string);
    
    public:
    	Account() : user("default") {};

	void print() const {
	    cout << user << endl;
	}

    private:
    	string user;
};

void setUsername(Account &str, string strnew) 
{
    str.user = strnew;
}

int main() {
    Account ogg;
    ogg.print();

    // Posso chiamare la funzione direttamente
    setUsername(ogg, "b3h3m0th");

    ogg.print();
   
   return(0);
}
