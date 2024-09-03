#include<iostream>
using namespace std;

template <typename T1,typename T2>
T1 multiply(T1 a, T2 b)
{
	return a*b;
}

int main()
{
	int num1;
	float num2;
	cout << "Enter an integer: ";
	cin >> num1;
	cout <<"Enter a floating point number: ";
	cin >> num2;
	cout << "Product: " << multiply<int,float>(num1,num2);
	return 0;
}
