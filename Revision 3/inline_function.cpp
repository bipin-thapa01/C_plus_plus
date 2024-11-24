//inline function
#include<iostream>
using namespace std;

inline float cube(float a){
	return a*a*a;
}

int main(){
	float a;
	cout << "Enter a number: ";
	cin >> a;
	cout << "Cube of given function is: ";
	cout << cube(a);
	return 0;
}
