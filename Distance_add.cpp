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
		int getData()
		{
			return km*1000+m;
		}
};

int main()
{
	int m1,km1,m2,km2,ans;
	cout << "Enter 1st km and meter: ";
	cin >> km1 >> m1;
	Distance d1(km1,m1);
	cout << "Enter 2nd km and meter: ";
	cin >> km2 >> m2;
	Distance d2(km2,m2);
	ans = d1.getData()+d2.getData();
	cout << "Total distance km: " << ans/1000 << " m: " << ans%1000;
	return 0;
}
