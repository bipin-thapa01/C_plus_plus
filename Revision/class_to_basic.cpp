//Class to Basic using casting operator
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
		operator int()
		{
			return km*1000+m;
		}
};

int main()
{
	int m,km,ans;
	cout << "Enter distance in terms of m and km:" << endl;
	cout << "km: ";
	cin >> km;
	cout << "m: ";
	cin >> m;
	A distance(km,m);
	ans = distance;
	cout << "Distance in meter: " << ans;
	return 0;
}
