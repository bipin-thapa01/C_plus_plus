//class to class conversion using operator overloading

#include<iostream>
using namespace std;

class A
{
	private:
		int km,m;
	public:
		A(int a,int b)
		{
			km = a;
			m = b;	
		}
		int getKm()
		{
			return km;
		}
		int getM()
		{
			return m;
		}
};

class B
{
	private:
		float km;
	public:
		void operator =(A& obj)
		{
			km = obj.getKm() + (obj.getM()/1000.0);
		}
		void display()
		{
			cout << km;
		}
};

int main()
{
	int km,m;
	cout << "Enter distance in kilometer and meter: ";
	cin >> km >> m;
	A obj1(km,m);
	B obj2;
	obj2 = obj1;
	obj2.display();
	return 0;
}
