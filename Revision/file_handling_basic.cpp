#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main()
{
	string data1,data2;
	fstream writeFile;
	writeFile.open("file.dat",ios::out);
	if(!writeFile){
		cout << "File not opened!";
		exit(0);
	}
	cout << "Enter a sentence: ";
	getline(cin,data1);
	writeFile << data1;
	writeFile.close();
	fstream readFile;
	readFile.open("file.dat",ios::in);
	if(!readFile){
		cout << "File not opened!";
		exit(0);
	}
	getline(readFile,data2);
	readFile.close();
	int vowelLength = 0, consonantLength = 0;
	for(int i = 0;i<data2.length();i++){
		if(data2[i]>=65&&data2[i]<=90||data2[i]>=97&&data2[i]<=122){
			if(data2[i]=='a'||data2[i]=='e'||data2[i]=='i'||data2[i]=='o'||data2[i]=='u'||
			data2[i]=='A'||data2[i]=='E'||data2[i]=='I'||data2[i]=='O'||data2[i]=='U'){
				vowelLength++;
			}
			else{
				consonantLength++;
			}
		}
	}
	cout << "Vowels count: " << vowelLength << endl;
	cout << "Consonant count: " << consonantLength << endl;
	return 0;
}
