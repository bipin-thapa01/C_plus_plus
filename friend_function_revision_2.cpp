//friend function

#include<iostream>
using namespace std;

class D2;

class D1
{
	private:
		float num;
	public:
		D1(int a)
		{
			num = a;
		}
		friend float sum(D1&,D2&);
};

class D2
{
	private:
		float num;
	public:
		D2(int a)
		{
			num = a;
		}
		friend float sum(D1&,D2&);
};

float sum(D1& obj1,D2& obj2)
{
	return obj1.num+obj2.num;
}

int main()
{
	int num1,num2;
	cout << "Enter two numbers: ";
	cin >> num1 >> num2;
	D1 obj1(num1);
	D2 obj2(num2);
	int ans = sum(obj1,obj2);
	cout << "Sum is: " << ans;
	return 0;
}
