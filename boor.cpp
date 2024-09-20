//binary operator overloading

#include<iostream>
using namespace std;

class X
{
	private:
		float num;
	public:
		X(float a)
		{
			num = a;
		}
		X operator +(X& obj)
		{
			X temp(0);
			temp = num + obj.num;
			return temp;
		}
		void display()
		{
			cout << "Sum: " << num;
		}
};

int main()
{
	float n1,n2,sum;
	cout << "Enter two numbers: ";
	cin >> n1 >> n2;
	X obj1(n1), obj2(n2), ans(0);
	ans = obj1 + obj2;
	ans.display();
	return 0;
}
