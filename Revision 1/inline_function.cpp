//inline function
#include<iostream>
using namespace std;

inline float mul(float a, float b){
	return a*b;
}

int main(){
	float n1,n2;
	cout << "Enter two numbers: ";
	cin >> n1 >> n2;
	cout << "Product: " << mul(n1,n2);
	return 0;
}
