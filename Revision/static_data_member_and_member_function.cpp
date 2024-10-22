//Static Data Member & Member Function

#include<iostream>
using namespace std;

class A
{
	private:
		static int a;//static data member
	public:
		static void setValue(int num)//static member function
		{
			a = num;
		}
		static int getValue()//static member function
		{
			return a;
		}
};
int A::a=4;

int main()
{
	int num;
	cout << "Static data member initialization: " << A::getValue(); 
	cout << endl << "Set value for static data member: ";
	cin >> num;
	A::setValue(num);
	cout << "Static data member after: " << A::getValue();
	return 0;
}	

