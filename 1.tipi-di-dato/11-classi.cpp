// INTRODUZIONE ALLE CLASSI

#include <iostream>
using namespace std;

// definizione della classe Registro
class Registro
{
	public:
		// Funzione di benvenuto
		void MessaggioBenvenuto(string nomeCorso)
		{
			cout << "Benvenuto al corso di: " << nomeCorso << endl;
		}
};

int main() {
	Registro registro;
	registro.MessaggioBenvenuto("C++");

   return(0);
}

