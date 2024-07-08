#include<iostream>
using namespace std;

class B;

class A
{
	private:
		int x;
	public:
		void getX(int num)
		{
			x = num;
		}
		friend int sum(A,B);
};

class B
{
	private:
		int y;
	public:
		void getY(int num)
		{
			y = num;
		}
		friend int sum(A,B);
};

int sum(A obj1, B obj2)
{
	return obj1.x+obj2.y;
}

int main()
{
	A obj1;
	B obj2;
	int num;
	cout << "Enter value of x: ";
	cin >> num;
	obj1.getX(num);
	cout << "Enter value of y: ";
	cin >> num;
	obj2.getY(num);
	cout << "Sum is: " << sum(obj1,obj2);
	return 0;
}
