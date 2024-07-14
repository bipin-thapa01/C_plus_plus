#include<iostream>
using namespace std;

class student
{
	private:
		int age,roll;
		string name,address;
	public:
		student(int a,int r,string n,string ad)
		{
			age = a;
			roll = r;
			name = n;
			address = ad;
		}
		void display()
		{
			cout << "Details of student are:" << endl;
			cout << "Name: " << name << endl;
			cout << "Roll: " << roll << endl;
			cout << "Age: " << age << endl;
			cout << "Address: " << address;
		}
};

int main()
{
	int a,r;
	string n,ad;
	cout << "Enter user details: " << endl;
	cout << "Name: ";
	getline(cin,n);
	cout << "Roll: ";
	cin >> r;
	cout << "Age: ";
	cin >> a;
	fflush(stdin);
	cout << "Address: ";
	getline(cin,ad);
	student s(a,r,n,ad);
	s.display();
	return 0;
}
