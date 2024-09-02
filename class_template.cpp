#include<iostream>
using namespace std;

template <class T>
class A
{
	private:
		T a;
	public:
		A(T x)
		{
			a = x;
		}
		void operator ++()
		{
			a--;
		}
		void display()
		{
			cout << a;
		}
};

int main()
{
	int num1;
	float num2; 
	cout << "Enter an integer: ";
	cin >> num1;
	cout << "Enter a float number: ";
	cin >> num2;
	A<int> obj1(num1);
	A<float> obj2(num2);
	cout << "Before change" << endl;
	cout << "integer: ";
	obj1.display();
	cout << endl << "float: ";
	obj2.display();
	++obj1;
	++obj2;
	cout << endl << "After change" << endl;
	cout << "integer: ";
	obj1.display();
	cout << endl << "float: ";
	obj2.display();
	return 0;
}
