//function overloading

#include<iostream>
using namespace std;

int div(int a,int b){
	return a/b;
}

float div(float a,float b){
	return a/b;
}

int main(){
	int n1,n2;
	float a,b;
	cout << "Enter two integer numbers: ";
	cin >> n1 >> n2;
	cout << "Ans: " << div(n1,n2);
	cout << endl << "Enter two float numbers: ";
	cin >> a >> b;
	cout << "Ans: " << div(a,b);
	return 0;
}
