#include<iostream>
using namespace std;

class A
{
	private:
		float km;
	public:
		A(float a)
		{
			km = a;
		}
		void dispaly()
		{
			cout << km;
		}
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
		operator A()
		{
			A obj(m/1000.0);
			return obj;
		}
};

int main()
{
	int m;
	cout << "Enter distance in meter: ";
	cin >> m;
	B meter(m);
	A kilometer(0);
	kilometer = meter;
	kilometer.dispaly();
	return 0;
}
