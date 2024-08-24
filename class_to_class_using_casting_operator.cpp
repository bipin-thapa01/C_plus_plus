//class to class conversion using casting function
#include<iostream>
using namespace std;

class B
{
	private:
		float km;
	public:
		B()
		{
			km = 0;
		}
		B(float a)
		{
			km = a;
		}
		void display()
		{
			cout << km;	
		}		
};

class A
{
	private:
		int m;
	public:
		A(int a)
		{
			m = a;
		}
		operator B()
		{
			B obj(m/1000.0);
			return obj;
		}
};

int main()
{
	int meter;
	cout << "Enter distance in meter: ";
	cin >> meter;
	A m(meter);
	B kilo;
	kilo = m;
	cout << "Distance in kilometer is ";
	kilo.display();
	return 0;
}
