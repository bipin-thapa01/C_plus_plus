//operator overloading for unary operator
#include <iostream>
using namespace std;

class X{
	int a;
	public:
		X(int n){
			a = n;
		}
		void operator ++(int){
			++a;
		}
		void display(){
			cout << a;
		}
};

int main(){
	int num;
	cout << "Enter a number: ";
	cin >> num;
	X obj(num);
	obj++;
	cout << "Number: ";
	obj.display();
	return 0;
}
