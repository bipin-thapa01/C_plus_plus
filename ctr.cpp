//class template

#include<iostream>
using namespace std;

template <class T>
class A
{
	T num;
	public:
		A(T a)
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
	int n;
	cout << "Enter an integer number: ";
	cin >> n;
	A<int> obj1(n);
	obj1.display();
	cout << endl;
	float n2;
	cout << "Enter a float number: ";
	cin >> n2;
	A<float> obj2(n2);
	obj2.display();
	return 0;
}
