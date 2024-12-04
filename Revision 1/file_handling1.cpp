//writing a string and then reading from the file
#include<iostream>
#include<fstream>
using namespace std;

int main(){
	string a,b;
	cout << "Enter a string: ";
	getline(cin,a);
	fstream file;
	file.open("try.txt",ios::out);
	if(!file){
		cout << "File not opened!";
		exit(0);
	}
	file << a;
	file.close();
	file.open("try.txt",ios::in);
	if(!file){
		cout << "File not opened!";
		exit(0);
	}
	getline(file,b);
	cout << b;
	file.close();
	return 0;
}
