//class to basic data conversion

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
	int km,m;
	cout << "Enter distace in km and meter respectively: ";
	cin >> km >> m;
	A obj(km,m);
    float ans = obj;
    ans/=1000;
	cout << "Total distance in kilometer: " << ans;
	return 0;
}
