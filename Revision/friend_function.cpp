//Friend Function

#include<iostream>
using namespace std;

class B;

class A
{
	private:
		int km;
	public:
		A(int a)
		{
			km = a;
		}
		friend int toMeter(A&,B&);
};

class B
{
	private:
		int m;
	public:
		B(int a)
		{
			m = a;
		}
		friend int toMeter(A&,B&);
};

int toMeter(A& obj1,B& obj2)
{
	return obj1.km*1000+obj2.m;
}

int main()
{
	int m,km,ans;
	cout << "Enter 1st distance in kilometer: ";
	cin >> km;
	cout << "Enter 2nd distance in meter: ";
	cin >> m;
	A obj1(km);
	B obj2(m);
	ans = toMeter(obj1,obj2);
	cout << "Total distance in meter: " << ans;
	return 0;
}
