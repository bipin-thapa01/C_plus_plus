//virtual function
#include<iostream>
using namespace std;

class parent{
	public:
		virtual display()
		{
			cout << "This is parent class";
		}
};

class child : public parent{
	public:
		virtual display()
		{
			cout << "This is child class";
		}
};

int main()
{
	parent *ptr = new child;
	ptr->display();
	cout << endl;
	ptr->parent::display();
	return 0;
}
