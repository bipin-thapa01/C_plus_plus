//write and read an object into and from a file
#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;

class X{
	int roll,age;
	char name[100];
	public:
		X(int a,int b, char c[]){
			roll = a;
			age = b;
			strcpy(name,c);
		}
		X(){
		}
		void display(){
			cout << "Details of student:" << endl;
			cout << "Roll: " << roll << endl;
			cout << "Name: " << name << endl;
			cout << "Age: " << age;
		}
};

int main(){
	int a,r;
	char n[100];
	cout << "Enter details of a student:" << endl;
	cout << "Enter roll: ";
	cin >> r;
	fflush(stdin);
	cout << "Enter name: ";
	cin.getline(n,100);
	cout << "Enter age: ";
	cin >> a;
	X student(r,a,n);
	fstream file;
	file.open("user.txt",ios::out);
	if(!file){
		cout << "File not opened!";
		exit(0);
	}
	file.write((char*)& student,sizeof(student));
	file.close();
	file.open("user.txt",ios::in);
	if(!file){
		cout << "File not opened!";
		exit(0);
	}
	X student2;
	file.read((char*)& student2,sizeof(student2));
	student2.display();
	file.close();
	return 0;
}
