//friend function
#include<iostream>
using namespace std;

class Y;
class X{
	float a;
	public:
		X(float n){
			a = n;
		}
		friend int sum(X&,Y&);
};

class Y{
	float a;
	public:
		Y(float n){
			a = n;
		}
		friend int sum(X&,Y&);
};

int sum(X& obj1,Y& obj2){
	return obj1.a+obj2.a;
}

int main(){
	int n1,n2;
	cout << "Enter two numbers: ";
	cin >> n1 >> n2;
	X obj1(n1);
	Y obj2(n2);
	cout << "Sum: " << sum(obj1,obj2);
	return 0;
}
