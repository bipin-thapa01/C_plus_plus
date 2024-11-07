//class template
#include<iostream>
using namespace std;

template <class T>
class X{
	private:
		T a;
	public:
		X(T n)
		{
			a = n;
		}
		void display()
		{
			cout << "Square: " << a*a;
		}
};

int main()
{
	int n1;
	float n2;
	cout << "Enter integer number: ";
	cin >> n1;
	X<int> obj1(n1);
	obj1.display();
	cout << endl << "Enter float number: ";
	cin >> n2;
	X<float> obj2(n2);
	obj2.display();
	return 0;
}
