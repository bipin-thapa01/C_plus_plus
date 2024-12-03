//class to class using casting operator
#include<iostream>
#include<cmath>
using namespace std;

class Y{
	int a;
	public:
		Y(int n){
			a = n;
		}
		Y(){}
		void display(){
			cout << "Power 4 of given number: " << a;
		}
};

class X{
	int a;
	public:
		X(int n){
			a = n;
		}
		operator Y(){
			Y temp(pow(a,4));
			return temp;
		}
};

int main(){
	int num;
	cout << "Enter a number: ";
	cin >> num;
	X obj1(num);
	Y obj2;
	obj2 = obj1;
	obj2.display();
	return 0;
}
