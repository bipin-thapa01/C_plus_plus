#include<iostream>
#include<fstream>
#include<string>
using namespace std;

class A{
	private:
		int roll;
		float marks;
		string name;
	public:
		A(){
		}
		A(int r, float m, string n){
			roll = r;
			marks = m;
			name = n;
		}
		int getRoll(){
			return roll;
		}
		float getMarks(){
			return marks;
		}
		string getName(){
			return name;
		}
		void display(){
			cout << "Details of student: " << endl;
			cout << "Roll: " << roll << endl;
			cout << "Name: " << name << endl;
			cout << "Marks: " << marks << endl;
		}
};

int main(){
	int r;
	float m;
	string n;
	cout << "Enter details of student: " << endl;
	cout << "Enter name: ";
	cin >> n;
	fflush(stdin);
	cout << "Enter roll: ";
	cin >> r;
	cout << "Enter marks: ";
	cin >> m;
	A std(r,m,n);
	fstream writeFile;
	writeFile.open("std.txt",ios::out);
	if(!writeFile){
		cout << "File opening failed!";
		exit(0);
	}
	writeFile.write((char*)& std,sizeof(std));
	writeFile.close();
	cout << "Written into file successfully!" << endl;
	fstream readFile;
	readFile.open("std.txt",ios::in);
	if(!readFile){
		cout << "File opening failed!";
		exit(0);
	}
	A std2;
	readFile.read((char*)& std2, sizeof(std2));
	std2.display();
	return 0;
}
