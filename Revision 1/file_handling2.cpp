//read from a file and copy to another one
#include<iostream>
#include<fstream>
using namespace std;

int main(){
	string s;
	fstream file;
	file.open("try.txt",ios::in);
	if(!file){
		cout << "File not opened!";
		exit(0);
	}
	getline(file,s);
	file.close();
	file.open("try2.txt",ios::out);
	if(!file){
		cout << "File not opened!";
		exit(0);
	}
	file << s;
	cout << "Written into file successfully!";
	file.close();
	return 0;
}
