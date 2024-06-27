#include<iostream>
#include<iomanip>
using namespace std;

float potentialEnergy(float m, float h, float g=9.8)
{
	return m*g*h;
}

float areaOfCricle(float r, float pi = 22.0/7)
{
	return pi*r*r;
}

float dollarsToRupee(float d, float rate=130)
{
	return d*rate;
}

int main()
{
	int choice;
	float m,h,r,d;
	top:
	cout << "\t\tMenu" << endl;
	cout << "1. potential energy" << endl;
	cout << "2. area of circle" << endl;
	cout << "3. dollar to nepali" << endl;
	cout << "Enter your choice: ";
	cin >> choice;
	if(choice == 1)
	{
		cout << "Enter mass and height: ";
		cin >> m >> h;
		cout << fixed << setprecision << "Potential Engery is: " << potentialEnergy(m,h) <<" joule";
	}
	else if(choice == 2)
	{
		cout << "Enter radius of circle: ";
		cin >> r;
		cout << fixed << setprecision <<  "Area of circle is: " << areaOfCricle(r) <<" sq. meter";
	}
	else if(choice == 3)
	{
		cout << "Enter money in rupees: ";
		cin >> d;
		cout << fixed << setprecision <<  "$ " << d << " is Rs " << dollarsToRupee(d);
	}
	else
	{
		cout << "Invalid input! Try again." << endl << endl;
		goto top;
	}
	return 0;
}
