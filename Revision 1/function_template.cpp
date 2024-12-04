//function template
#include<iostream>
using namespace std;

template <typename T>
T sum(T a,T b){
	return a+b;
}

int main(){
	int a,b;
	float m,n;
	cout << "Enter two integers: ";
	cin >> a >> b;
	cout << "Integer sum: " << sum<int>(a,b);
	cout << endl << "Enter two float numbers: ";
	cin >> m >> n;
	cout << "Float sum: " <<  sum<float>(m,n);
	return 0;
}
