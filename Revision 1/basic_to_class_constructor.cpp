//basic to class conversion using constructor
#include<iostream>
using namespace std;

class X{
	int k,m;
	public:
		X(int a){
			k = a/1000;
			m = a%1000;
		}
		void display(){
			cout << "Distance:" << endl;
			cout << k << "km & " << m << "m";
		}
};

int main(){
	int d;
	cout << "Enter distance in meter: ";
	cin >> d;
	X obj = d;
	obj.display();
	return 0;
}
