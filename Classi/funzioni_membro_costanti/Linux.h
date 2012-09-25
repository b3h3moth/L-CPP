#include <string>
using namespace std;

/*
Mediante la parola chiave 'const' si indica un oggetto non modificabile, va
aggiunto dopo gli eventuali parametri della funzione membro.

Costruttori e distrutori non possono essere dichiarati 'const', tuttavia un
costruttore puo' essere utilizzato per inizializzare un oggetto costante.

Da tener presente che ci sono due tipi di funzioni membro, mutators e accessors,
le prime modificano i dati membro dell'oggetto, le seconde invece sono adoperate
per chiedere informazioni all'oggetto stesso, senza tuttavia modificarlo; una
buona regola inerente l'OOP vuole che le funzioni membro accessors vengano
dichiarate const.
*/

class Linux {
    public:
    	Linux(string kernel = "linux", string distro = "debian");

    	void setSystem(string os_name, string distro_name);
	string getOsName() const;
	string getDistroName() const;
	void printOS() const;
	void printDistro();

    private:
    	string my_kernel;
	string my_distro;
};
