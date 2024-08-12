#include <iostream>
using namespace std;

class Distance
{
	private: 
		int km,m;
	public:
		void setValue(int num)
		{
			cout << "Enter km and meter of distance " << num << ": ";
			cin >> km >> m;
		}
		Distance operator +(const Distance& obj)
		{
			Distance temp;
			temp.km = km + obj.km;
			temp.m = m + obj.m;
			if(temp.m >= 1000)
			{
				temp.km += temp.m/1000;
				temp.m = temp.m%1000;
			}
			return temp;
		}
		void displayData()
		{
			cout << endl << "Result km: " << km;
			cout << endl << "Result m: " << m;
		}
};

int main()
{
	Distance d1,d2,ans;
	d1.setValue(1);
	d2.setValue(2);
	ans = d1 + d2;
	ans.displayData();
	return 0;
}
