#include<iostream>
using namespace std;

class Parent
{
	public:
		virtual void display()
		{
			cout << "This is parent class";
		}
};

class Child : public Parent
{
	public:
		void display()
		{
			cout << "This is child class";
		}
};

int main()
{
	Parent *ptr = new Child;
	ptr->display();
	return 0;
}
