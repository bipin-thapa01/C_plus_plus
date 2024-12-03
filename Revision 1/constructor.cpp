#include<iostream>
using namespace std;

class X{
	int roll;
	string name;
	float age;
	string address;
	public:
		X(int a,string b,float c,string d){
			roll = a;
			name = b;
			age = c;
			address = d;
		}
		void display(){
			cout << "Details of student: " << endl;
			cout << "Roll: " << roll << endl;
			cout << "Name: " << name << endl;
			cout << "Age: " << age << endl;
			cout << "Address: " << address << endl;
		}
};

int main(){
	int r;
	float a;
	string n,ad;
	cout << "Enter details of a student: " << endl;
	cout << "Enter roll: ";
	cin >> r;
	fflush(stdin);
	cout << "Enter name: ";
	getline(cin,n);
	cout << "Enter age: ";
	cin >> a;
	fflush(stdin);
	cout << "Enter address: ";
	getline(cin,ad);
	X obj(r,n,a,ad);
	obj.display();
	return 0;
}
