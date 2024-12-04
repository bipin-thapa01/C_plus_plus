//writing mutiple object into file and reading them
#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;

class cd{
	int cd_id;
	char NameofCd[100];
	float price;
	public:
		void setData(int a,char b[],float c){
			cd_id = a;
			strcpy(NameofCd,b);
			price = c;
		}
		void display(){
			cout << endl;
			cout << "ID: " << cd_id << endl;
			cout << "Name of CD: " << NameofCd << endl;
			cout << "Price: " << price;
		}
};

int main(){
	int a,n;
	char b[100];
	float c;
	cd obj;
	fstream file;
	file.open("cd.txt",ios::out);
	if(!file){
		cout << "File not opened!";
		exit(0);
	}
	cout << "Enter how many CDs: ";
	cin >> n;
	for(int i = 0; i<n; i++){
		cout << "Enter CD id: ";
		cin >> a;
		fflush(stdin);
		cout << "Enter CD name: ";
		cin.getline(b,100);
		cout << "Enter CD price: ";
		cin >> c;
		obj.setData(a,b,c);
		file.write((char*)& obj, sizeof(obj));
	}
	file.close();
	file.open("cd.txt",ios::in);
	if(!file){
		cout << "File not opened!";
		exit(0);
	}
	while(file.read((char*)& obj, sizeof(obj))){
		obj.display();
	}
	file.close();
	return 0;
}
