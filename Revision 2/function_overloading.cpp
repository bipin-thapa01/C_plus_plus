//function overloading
#include<iostream>
using namespace std;

int sub(int a,int b){
	return a-b;
}

float sub(float a,float b){
	return a-b;
}

int main(){
	int n1,n2;
	float N1,N2;
	cout << "Enter two integers: ";
	cin >> n1 >> n2;
	cout << "Enter two float numbers: ";
	cin >> N1 >> N2;
	cout << "Inetger number difference: " << sub(n1,n2);
	cout << endl << "Float number difference: " << sub(N1,N2);
	return 0;
}
