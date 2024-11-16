//write and read object from file
#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;

class X{
	private:
		int id;
		char name[100];
		float gpa;
	public:
		X(){
		}
		X(int i,char n[],float g){
			id = i;
			strcpy(name,n);
			gpa = g;
		}
		void display(){
			cout << "Data of student: "<< endl;
			cout << "ID: " << id << endl;
			cout << "Name: " << name << endl;
			cout << "GPA: " << gpa;
		}
};

int main(){
	int id;
	char name[100];
	float gpa;
	cout << "Enter details of student" << endl;
	cout << "Enter id: ";
	cin >> id;
	cin.ignore();
	cout << "Enter name: ";
	cin.getline(name,100);
	cout << "Enter GPA: ";
	cin >> gpa;
	X std(id,name,gpa);
	fstream file;
	file.open("try.txt",ios::out|ios::app);
	if(!file){
		cout << "File not opened!";
		exit(0);
	}
	file.write((char*)& std,sizeof(std));
	file.close();
	file.open("try.txt",ios::in);
	X std2;
	while(!file.eof()){
		file.read((char*)& std2,sizeof(std2));
		if(!file.good())
		{
			break;
		}
		std2.display();	
		cout << endl;
	}
	return 0;
}
