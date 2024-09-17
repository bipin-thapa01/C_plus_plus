//solving diamong problem/ambiguity in multi-path inheritance

#include<iostream>
using namespace std;

class superBase
{
	private:
		int value;
	public:
		void getValue(int a)
		{
			value = a;
		}
		void display()
		{
			cout << "Value inside super base is " << value;
		}
};

class Base1 : virtual public superBase
{};

class Base2 : virtual public superBase
{};

class Child : public Base1, public Base2
{};

int main()
{
	int num;
	cout << "Enter a integer number for super base: ";
	cin >> num;
	Child obj;
	obj.getValue(num);
	obj.display();
	return 0;
}
