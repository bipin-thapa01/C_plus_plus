//default argument

#include<iostream>
using namespace std;

float area(float r,float pi=22/7.0)
{
	return pi*r*r;
}

int main()
{
	float r,ar;
	cout << "Enter radius of circle: ";
	cin >> r;
	ar = area(r);
	cout << "Area of circle: " << ar;
	return 0;
}
