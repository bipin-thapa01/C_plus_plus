#include<iostream>
using namespace std;

class A
{
	private:
		int a;
	public:
		A()
		{
			a=5;
			cout << "Value of a is: " << a<< endl;
		}
};

int main()
{
	A();
	A obj;
	return 0;
}
