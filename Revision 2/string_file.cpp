//file handling to write and read string into file
#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){
	string s,s2;
	cout << "Enter a sentence: ";
	getline(cin,s);
	fstream writeFile;
	writeFile.open("try.txt",ios::out);
	if(!writeFile){
		cout << "File not opened!";
		exit(0);
	}
	writeFile << s << endl;
	writeFile.close();
	fstream readFile;
	readFile.open("try.txt",ios::in);
	getline(readFile,s2);
	cout << "Text in file: " << endl;
	cout << s2;
	readFile.close();
	return 0;
}
