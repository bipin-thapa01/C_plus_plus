//static data member and member function
#include<iostream>
using namespace std;

class Static
{
	private:
		static int value;
	public:
		static void print()
		{
			cout << value;
		}
};

int Static::value = 5;

int main()
{
	cout << "The value inside static data member is: ";
	Static::print();
	return 0;
}
