//function overloading
#include<iostream>
using namespace std;

int sum(int a,int b){
	return a+b;
}

float sum(float a,float b){
	return a+b;
}

int main(){
	int n1,n2;
	float N1,N2;
	cout << "Enter two integers: ";
	cin >> n1 >> n2;
	cout << "Integer sum: " << sum(n1,n2);
	cout << endl << "Enter two float numbers: ";
	cin >> N1 >> N2;
	cout << "Float sum: " << sum(N1,N2);
	return 0;
}
