//Function Overloading

#include<iostream>
using namespace std;

int mul(int a,int b)
{
	return a*b;
}

float mul(float a,float b)
{
	return a*b;
}

int main()
{
	int n1,n2,int_mul;
	float N1,N2,float_mul;
	cout << "Enter two integers: ";
	cin >> n1 >> n2;
	int_mul = mul(n1,n2);
	cout << "Enter two float numbers: ";
	cin >> N1 >> N2;
	float_mul = mul(N1,N2);
	cout << endl << "Integer Product: " << int_mul;
	cout << endl << "Float Product: " << float_mul;
	return 0;
}
