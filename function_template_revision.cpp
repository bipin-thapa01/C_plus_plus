//function template

#include<iostream>
using namespace std;

template <typename T>
T sum(T a,T b)
{
	return a+b;
}

int main()
{
	int num1,num2;
	float n1,n2;
	cout<<"Enter two integers: ";
	cin >> num1 >> num2;
	cout <<"Sum: " << sum<int>(num1,num2);
	cout << endl << "Enter two float numbers: ";
	cin >> n1 >> n2;
	cout << "Sum: " << sum<float>(n1,n2);
	return 0;
}
