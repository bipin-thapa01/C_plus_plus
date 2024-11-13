#include<iostream>
#include<fstream>
#include<string>
using namespace std;

class A{
	private:
		string name;
		int roll;
		float marks;
	public:
		A(int a, float b, string c){
			roll = a;
			marks = b;
			name = c;
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
};

int main(){
	int r;
	float m;
	string n;
	cout << "Enter details of student: " << endl;
	cout << "Enter roll: ";
	cin >> r;
	fflush(stdin);
	cout << "Enter name: ";
	getline(cin,n);
	fflush(stdin);
	cout << "Enter marks: ";
	cin >> m;
	A std(r,m,n);
	fstream writeFile;
	writeFile.open("student.txt",ios::out | ios::app);
	if(!writeFile){
		cout << "File not oepned!";
		exit(0);
	}
	writeFile << std.getName() << endl;
	writeFile << std.getRoll() << endl;
	writeFile << std.getMarks() << endl;
	writeFile.close();
	cout << "Written into file successfully!";
	fstream readFile;
	readFile.open("student.txt",ios::in);
	if(!readFile){
		cout << "File not oepned!";
		exit(0);
	}
	int roll;
	float marks;
	string name;
	while(!readFile.eof()){
		readFile >> name;
		readFile >> roll;
		readFile >> marks;
		if (!readFile.good())
	    {
	      break;
	    }
		cout << endl << "Name: " << name;
		cout << endl << "Roll: " << roll;
		cout << endl << "Marks: " << marks;
		cout << endl << endl;
	}
	readFile.close();
	return 0;
}












