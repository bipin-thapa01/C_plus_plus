//diamond problem
#include<iostream>
using namespace std;

class superBase{
	public:
		void display(){
			cout << "This is superbase class";
		}
};

class base1 : virtual public superBase{
};

class base2 : virtual public superBase{
};

class derived : public base1, public base2{
};

int main(){
	derived d;
	d.display();
	return 0;
}
