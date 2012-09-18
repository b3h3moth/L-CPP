#include <iostream>
#include <string>
using namespace std;

class BasicClass {
    public:
	BasicClass (const string &str) : name(str) {}
	void print() { cout << name << endl; }
    private:
    	string name;
};

template <class T>
void swap_func(T& x, T& y) {
    T temp = x;
    x = y;
    y = temp;
}

int main() {
    BasicClass object1("Antonio");
    BasicClass object2("Salvatore");
    int int1 = 111, int2 = 999;
    float flo1 = 11.11, flo2 = 99.99;
    double doub1 = 11.11, doub2 = 99.99;
    char char1 = 'a', char2 = 'z';

    swap_func(object1, object2);
    swap_func(int1, int2);
    swap_func(flo1, flo2);
    swap_func(doub1, doub2);
    swap_func(char1, char2);


    object1.print();
    object2.print();

    cout << int1 << " - " << int2 << endl;
    cout << flo1 << " - " << flo2 << endl;
    cout << doub1 << " - " << doub2 << endl;
    cout << char1 << " - " << char2 << endl;

   return(0);
}
