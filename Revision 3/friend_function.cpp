//friend function
#include<iostream>
using namespace std;

class Y;
class X{
	int a;
	public:
		X(int n){
			a = n;
		}
		friend int sum(X&,Y&);
};

class Y{
	int b;
	public:
		Y(int n){
			b = n;
		}
		friend int sum(X&,Y&);
};

int sum(X& obj1,Y& obj2){
	return obj1.a + obj2.b;
}
 
int main(){
	int n1,n2;
	cout << "Enter first number: ";
	cin >> n1;
	cout << "Enter second number: ";
	cin >> n2;
	X obj1(n1);
	Y obj2(n2);
	cout << "Sum: " << sum(obj1,obj2);
	return 0;
}
