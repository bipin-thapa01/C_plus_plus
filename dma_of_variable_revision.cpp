//DMA of single variable

#include<iostream>
using namespace std;

int main()
{
	int *ptr = new int;
	cout << "Enter a number: ";
	cin >> *ptr;
	if(ptr==0)
	{
		cout << ptr << " is zero";
	}
	else if(*ptr%2==0)
	{
		cout << *ptr << " is even";
	}
	else
	{
		cout << *ptr << " is odd.";
	}
	return 0;
}
