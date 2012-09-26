#include <iostream>
using namespace std;

class Over {
    friend int operator+(Over const &, Over const &);
    
    public:
        inline void setFunc(int x) { num = x; };
	// inline int getFunc() { return num; };
    
    private:
    	int num;
};

int operator+(Over const &test1, Over const &test2)
{
    Over ptemp;
    ptemp.num = test1.num * test2.num;

    cout << "overload '+', diventa moltiplicazione" << endl;
    
    return ptemp.num;
}

int main() {
    Over obj1, obj2;
    obj1.setFunc(10);
    obj2.setFunc(10);

    cout << obj1 + obj2 << endl;
   
   return(0);
}
