//diamond problem
#include<iostream>
using namespace std;

class superBase{
	private:
		int a;
	public:
		void setData(int n)
		{
			a = n;
		}
		int getData()
		{
			return a;
		}
};

class Base1 : virtual public superBase{
};

class Base2 : virtual public superBase{
};

class Derived : public Base1, public Base2{
};

int main()
{
	int num;
	cout << "Enter data: ";
	cin >> num;
	Derived D;
	D.setData(num);
	cout << "Data: " << D.getData();
	return 0;
}
