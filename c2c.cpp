//C2C data conversion using casting operator

#include<iostream>
using namespace std;

class A
{
	private:
		int meter;
	public:
		A(int a)
		{
			meter = a;
		}
		void display()
		{
			cout << "Distance in meter: " << meter;
		}
};

class B
{
	private:
		float km;
	public:
		B(float a)
		{
			km = a;
		}
		operator A()
		{
			A temp(km*1000);
			return temp;
		}
};

int main()
{
	float km;
	cout << "Enter distance in kilometer: ";
	cin >> km;
	B obj1(km);
	A obj2(0);
	obj2 = obj1;
	obj2.display();
	return 0;
}
