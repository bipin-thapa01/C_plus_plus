#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
	int A,B,C;
	double real_part,imaginary_part,x1,x2,d;
	cout << "Enter coefficient of a,b and c: ";
	cin >> A >> B >> C;
	d = pow(B,2)-4*A*C;
	if(d<0)
	{
		cout << "Roots are imaginary." << endl;
		real_part = -B/2*A;
		imaginary_part = sqrt(-d)/2*A;
		cout << fixed << setprecision(2) << "x1 = " << real_part << "+" << imaginary_part << "i" << endl;
		cout << fixed << setprecision(2) << "x2 = " << real_part << "-" << imaginary_part << "i";
	}
	else if(d == 0)
	{
		cout << "Roots are real and equal" << endl;
		x1 = -B/2*A;
		cout << "the value of x is: " << x1;
	}
	else
	{
		x1 = (-B+sqrt(pow(B,2)-4*A*C))/2*A;
		x2 = (-B-sqrt(pow(B,2)-4*A*C))/2*A;
		cout << "Roots are real and unequal." << endl;
		cout << "x1 = " << x1 << endl;
		cout << "x2 = " << x2;
	}
	return 0;
}
