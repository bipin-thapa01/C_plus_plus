//unary operator overloading postfix
#include<iostream>
using namespace std;

class A{
	int a;
	public:
		A(int n){
			a = n;
		}
		void operator ++(int){
			++a;
		}
		void display(){
			cout << "Result: " << a;
		}
};

int main(){
	int n;
	cout << "Enter a number: ";
	cin >> n;
	A obj(n);
	obj++;
	obj.display();
	return 0;
}
