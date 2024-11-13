//1.wap to read the content from one file write them into another file
//2.wap to create a file named abc.dat and store id, name, and price of N number of items to the file and read the
// info and display them

#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){
	string inputData;
	fstream readFile;
	readFile.open("try1.txt", ios::in);
	if(!readFile){
		cout << "File not opened!";
		exit(0);
	}
	getline(readFile,inputData);
	readFile.close();
	fstream writeFile;
	writeFile.open("try2.txt", ios::out);
	if(!writeFile){
		cout << "File not opened!";
		exit(0);
	}
	writeFile << inputData;
	writeFile.close();
	cout << "Data written into new file successfully and the data was: " << endl;
	cout << inputData;
	return 0;
}
