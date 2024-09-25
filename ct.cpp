//class template

#include<iostream>
using namespace std;

template <class T>
class X
{
	private:
		T a,b;
	public:
		X(T num1,T num2)
		{
			a = num1;
			b = num2;
		}
		T mul()
		{
			return a*b;
		}
};

int main()
{
	int n1,n2;
	float N1,N2;
	cout << "Enter two integers: ";
	cin >> n1 >> n2;
	X<int> obj1(n1,n2);
	cout << "Product: " << obj1.mul();
	cout << endl << "Enter two float numbers: ";
	cin >> N1 >> N2;
	X<float> obj2(N1,N2);
	cout << "Product: " << obj2.mul();
	return 0;
	
}
