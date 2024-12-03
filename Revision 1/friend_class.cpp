//friend class
#include<iostream>
using namespace std;

class Y;

class X{
	int a;
	public:
		X(int n){
			a = n;
		}
		friend class Y;
};

class Y{
	int a;
	public:
		Y(int n){
			a = n;
		}
		void display(X& obj){
			cout << "Product: " << a*obj.a;
		}
};

int main(){
	int n1,n2;
	cout << "Enter two numbers: ";
	cin >> n1 >> n2;
	X obj1(n1);
	Y obj2(n2);
	obj2.display(obj1);
	return 0;
}
