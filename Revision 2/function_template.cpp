//function template
#include<iostream>
using namespace std;

template <typename T>
T sum(T a,T b){
	return a+b;
}

int main(){
	int n1,n2;
	float N1,N2;
	cout << "Enter two integer numbers: ";
	cin >> n1 >> n2;
	cout << "Integer sum: " << sum<int>(n1,n2);
	cout << endl << "Enter two float numbers: ";
	cin >> N1 >> N2;
	cout << "Float sum: " << sum<float>(N1,N2);
	return 0;
}
