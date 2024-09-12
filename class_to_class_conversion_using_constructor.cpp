//class to class conversion using constructor
#include<iostream>
using namespace std;

class Kilo{
	private:
		int km;
	public:
		Kilo(int a)
		{
			km = a;
		}
		int getKilo()
		{
			return km;
		}
};

class Meter{
	private:
		int m;
	public:
		Meter(Kilo& obj)
		{
			m = obj.getKilo()*1000;
		}
		void display()
		{
			cout << "Distance in meter: " << m << " m";
		}
};

int main()
{
	int km;
	cout << "enter distance in kilometer: ";
	cin >> km;
	Kilo K = km; // basic to class conversion
	Meter M = K;
	M.display();
	return 0;
}
