#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

int main()
{
	for (int counter = 1; counter <= 20; counter++) {
		// genera numero casuale tra 1 e 6 e lo visualizza
		cout << setw(10) << (1 + rand() % 6);

		if (counter % 5 == 0)
			cout << endl;
	}


	return (0);
}
