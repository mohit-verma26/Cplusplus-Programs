 #include <iostream>
using namespace std;
class numm
{
    int z;
public:
    numm(){}
    numm(int x)
    {
        z=x;
    }
    int what()
    {
        return z;
    }

};

int main()
{
    int a=5;
	try {
	throw numm(a);
	}
	catch (numm g) {
		cout << "Caught "<<g.what();
	}
	catch (...) {
		cout << "Default Exception\n";
	}
	return 0;
}
