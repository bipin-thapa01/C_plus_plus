//class to basic data conversion using casting function

#include<iostream>
using namespace std;

class Distance
{
	private:
		int km, m;
	public:
		Distance(int a, int b)
		{
			km = a;
			m = b;
		}
		operator int()
		{
			return km*1000+m;
		}
};

int main()
{
	int km, m;
	cout << "Enter distance in meter and kilometer: ";
	cin >> m >> km;
	Distance obj(km,m);
	int sum = obj;
	cout << "Total distance in meter: " << sum;
	return 0;
}
