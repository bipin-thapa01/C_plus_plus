//inheritance
#include<iostream>
using namespace std;

class Parent{
	public:
		void display(){
			cout << "This is Parent class";
		}
};

class Child : public Parent{
};

int main(){
	Child c;
	c.display();
	return 0;
}
