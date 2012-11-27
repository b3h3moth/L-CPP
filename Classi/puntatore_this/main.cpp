#include <iostream>
using namespace std;

/*
Ciascun oggetto mantiene la copia dei dati membro della classe, tipicamente
quelli dichiarati come 'private', per cui due oggetti istanze della stessa
classe lavoreranno su due insiemi diversi di dato membro; per cio' che concerne 
le funzioni membro, il discorso e' totalmente diverso, poiche' esiste una sola
copia di esse, per cui due oggetti istanze della stessa classe invocheranno
le medesima copia della funzione membro.

Ora, come si fa a stabilire se una funzione e' stata invocata da un oggetto
piuttosto che da un altro? Ogni funzione membro di una classe contiene anche
il puntatore all'oggetto mediante il quale la funzione stessa e' stata 
invocata, ossia il puntatore 'this'.
*/

class Debian {
    public:
	Debian(string);
	void print() const;
    private:
    	const string name;
};

Debian::Debian(string str) : name(str) 
{
}

void Debian::print() const
{
    cout << name << endl;
    cout << this->name << endl;
    cout << (*this).name << endl;
}

int main() {
    Debian object("behemoth");

    object.print();

   return(0);
}
