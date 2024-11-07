//inheritance
#include<iostream>
using namespace std;

class parent{
	private:
		int a;
	public:
		parent(int n)
		{
			a = n;
		}
		int showData()
		{
			return a;
		}
};

class child : public parent{
	public:
		int a;
	public:
		child(int n,int n2) : parent(n2)
		{
			a = n;
		}
		int showData()
		{
			return a;
		}
};

int main()
{
	int n1,n2;
	cout << "Enter data for parent and child class respectively: ";
	cin >> n1 >> n2;
	child C(n2,n1);
	cout << "Data in parent class: " << C.parent::showData() << endl;
	cout << "Data in child class: " << C.child::showData();
	return 0;
}
