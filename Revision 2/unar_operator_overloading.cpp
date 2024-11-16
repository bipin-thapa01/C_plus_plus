//unary operator overloading prefix
#include<iostream>
using namespace std;

class X{
	private:
		int a;
	public:
		X(int num){
			a = num;
		}
		void operator ++(){
			a++;
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
	++obj;
	cout << "Result: ";
	obj.display();
	return 0;
}
