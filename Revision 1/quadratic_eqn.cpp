//roots of quadratic equation
#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int a,b,c;
	float r1,r2;
	cout << "Enter the coefficient of x^2: ";
	cin >> a;
	cout << "Enter the coefficient of x: ";
	cin >> b;
	cout << "Enter the constant term: ";
	cin >> c;
	int d = b*b-4*a*c;
	if(d==0){
		r1 = -1*b/2.0*a;
		cout << "The quadratic eqn has equal roots.";
		cout << "Root: " << r1; 
	}
	else if(d>0){
		r1 = (-1*b+sqrt(d))/2.0*a;
		r2 = (-1*b-sqrt(d))/2.0*a;
		cout < "The quadratic eqn has different roots.";
		cout << "Roots: "<< endl;
		cout << "r1: " << r1 << " r2: " << r2;
	}
	else{
		cout << "The quadratic eqn haad complex roots.";
		r1 = -1*b/2.0*a;
		r2 = sqrt(-1*d)/2.0*a;
		cout << "R1: " << r1 << "+ i" << r2;
		cout << "R2: " << r1 << "- i" << r2;
	}
	return 0;
}
