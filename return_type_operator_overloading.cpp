#include<iostream>
using namespace std;

class X
{
	private:
		int num;
	public:
		void setValue()
		{
			cout << "Enter the num: ";
			cin >> num;
		}
		X operator ++()//prefix
		{
			X temp;
			temp.num = ++num;
		}
		X operator ++(int)//suffix
		{
			X temp;
			temp.num = num++;
		}
		void displayData()
		{
			cout << endl << "Value: " << num;
		}
};

int main()
{
	X obj,result;
	obj.setValue();
	result = ++obj;
	cout << "Value after prefix ++";
	result.displayData();
	result = result++;
	cout << endl << "Value after suffix ++";
	result.displayData();
	return 0; 
}
