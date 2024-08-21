#include<iostream>
using namespace std;

class Distance
{
	private:
		int km,m;
	public:
		Distance(int a,int b)
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
	cout << "Enter distance in km and m: ";
	cin >> km >> m;
	Distance d(km,m);
	ans = d;
	cout << "Distance in m: " << ans;
	return 0;
}
