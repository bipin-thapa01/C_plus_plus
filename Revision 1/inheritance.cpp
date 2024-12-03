//inheritance
#include<iostream>
using namespace std;

class parent{
	public:
		void display(){
			cout << "This is parent class";
		}
};

class child : public parent{
	public:
		void display(){
			cout << "This is child class";
		}
};

int main(){
	child obj;
	obj.display();
	cout << endl;
	obj.parent::display();
	return 0;
}
