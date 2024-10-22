//operator overloading for unary operator(prefix)

#include<iostream>
using namespace std;

class A
{
	private:
		int a;
	public:
		A(int num)
		{
			a = num;
		}
		void operator ++()
		{
			a++;
		}
		void display()
		{
			cout << a;
		}
};

int main()
{
	int num;
	cout << "Enter a number: ";
	cin >> num;
	A x(num);
	++x;
	cout << "Result: ";
	x.display();
	return 0; 
}
