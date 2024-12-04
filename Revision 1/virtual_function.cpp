//virtual function
#include<iostream>
using namespace std;

class base{
	public:
		virtual void display(){
			cout << "This is base class";
		}
};

class child : public base{
	public:
		void display(){
			cout << "This is child class";
		}
};

int main(){
	base* ptr = new child;
	ptr->display();
	cout << endl;
	ptr->base::display();
	return 0;
}
