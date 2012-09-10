#include <string>
using namespace std;

/*
Il nome del costruttore di una classe coincide col nome della della classe 
stessa; da notare che i costruttori non restituiscono valori.

Il C++ utilizzera' un costruttore di default, creato automaticamente, qualora 
non fosse implementato nella classe.
*/

class Linux {
    public:
    	Linux(string name);

    	void setOS(string os_name);
    	string getOS();

    private:
    	string os;
};
