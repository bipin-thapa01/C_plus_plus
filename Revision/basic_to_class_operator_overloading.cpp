//basic to class using operator overloading
#include<iostream>
#include<cmath>
using namespace std;

class X{
	private:
		int dollar, cents;
	public:
		void operator =(int a)
		{
			dollar = a/130;
			cents = ceil((a/130.0-a/130)*130);
		}
		void display()
		{
			cout << "Dollar: " << dollar;
			cout << " Cents: " << cents;
		}
};

int main()
{
	int rs;
	cout << "Enter money in rs: ";
	cin >> rs;
	X obj;
	obj = rs;
	cout << "Money in dollar and cents: " << endl;
	obj.display();
	return 0;
}
