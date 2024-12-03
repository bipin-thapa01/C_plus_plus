//class to class using constructor
#include<iostream>
#include<cmath>
using namespace std;

class X{
	int a;
	public:
		X(int n){
			a = n;
		}
		int getX(){
			return a;
		}
};

class Y{
	int b;
	public:
		Y(X& obj){
			b = pow(obj.getX(),2);
		}
		void display(){
			cout << "Square of number: " << b;
		}
};

int main(){
	int a;
	cout << "Enter a number: ";
	cin >> a;
	X obj1(a);
	Y obj2 = obj1;
	obj2.display();
	return 0;
}
