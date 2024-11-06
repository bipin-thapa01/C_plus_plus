//function template

#include<iostream>
using namespace std;

template <typename T>
T mul(T a, T b)
{
	return a*b;
}

int main()
{
	int n1,n2;
	float N1,N2;
	cout << "Enter two integer numbers: ";
	cin >> n1 >> n2;
	cout << "Product: " << mul<int>(n1,n2);
	cout << endl << "Enter two float numbers: ";
	cin >> N1 >> N2;
	cout << "Product: " << mul<float>(N1,N2);
	return 0;
}
