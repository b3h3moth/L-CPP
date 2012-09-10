#include <string>
using namespace std;

class Linux {
    public:
    	Linux(const string kernel = "linux", const string distro = "debian");

    	void setSystem(string os_name, string distro_name);
	void print();

    private:
    	string my_kernel;
	string my_distro;
};
