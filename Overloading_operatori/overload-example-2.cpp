#include <iostream>
using namespace std;

class Over {
    friend ostream& operator<<(ostream& os, Over prova);
    public:
        void setT(int x) { var = x; };
	int getT() { return var; };
    
    private:
    	int var;
};

ostream& operator<<(ostream& os, Over prova)
{
    os << "Il valore di var: " << prova.var << endl;
    return os;
}

int main() {
    Over test;
    test.setT(10);

    cout << test;
   
   return(0);
}
