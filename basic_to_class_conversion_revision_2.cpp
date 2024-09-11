//basic to class conversion using operator overloading

#include<iostream>
using namespace std;

class A
{
	private:
		int num;
	public:
		A()
		{
			num = 0;	
		}
		void operator =(int a)
		{
			num = a;
		}
		void display()
		{
			cout << num;
		}
};

int main()
{
	int num;
	cout << "Enter a number: ";
	cin >> num;
	A obj;
	obj = num;
	obj.display();
	return 0;
}
