//Inline Function

#include<iostream>
using namespace std;

inline void swap(int& a,int& b)
{
	int temp = a;
	a = b;
	b = temp;
}

int main()
{
	int n1,n2;
	cout << "Enter two numbers: ";
	cin >> n1 >> n2;
	swap(n1,n2);
	cout << "Swapped number is: " << n1 << " " << n2;
	return 0;
}
