#include<iostream>
using namespace std;

class V
{
	private:
		int value;
	public:
		V()
		{
			cout << "Enter the value: ";
			cin >> value;
		}
		void operator ++()
		{
			--value;
		}
		void displayData()
		{
			cout << endl << "Final Value is: " << value;	
		}
};

int main()
{
	V obj;
	++obj;
	obj.displayData();
	return 0;
}
