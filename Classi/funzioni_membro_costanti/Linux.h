#include <string>
using namespace std;

/*
Mediante la parola chiave 'const' si indica un oggetto non modificabile, va
aggiunto dopo gli eventuali parametri della funzione membro.

Costruttori e distrutori non possono essere dichiarati 'const', tuttavia un
costruttore puo' essere utilizzato per inizializzare un oggetto costante.
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
