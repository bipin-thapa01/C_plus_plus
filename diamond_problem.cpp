#include<iostream>
using namespace std;

class super_base
{
	private:
		int a;
	public:
		super_base()
		{
			a = 1;
			cout << "I am constructor of super base" << endl;
		}
		void display()
		{
			cout << "Value inside super base class is: " << a << endl;
		}
};

class base1 : virtual public super_base
{
	public:
		base1()
		{
			cout << "I am constructor of base1" << endl;
		}
};

class base2 : virtual public super_base
{
	public:
		base2()
		{
			cout << "I am constructor of base2" << endl;
		}
};

class child : public base1, public base2
{
	public:
		child()
		{
			cout << "I am constructor of child" << endl;
		}
};

int main()
{
	child obj;
	obj.display();
	return 0;
}


