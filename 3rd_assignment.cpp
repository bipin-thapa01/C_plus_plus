//2.wap to create a file named abc.dat and store id, name, and price of N number of items to the file and read the
// info and display them

#include<iostream>
#include<fstream>
using namespace std;

class Store{
	public:
		int storeID;
		string itemName;
		float itemPrice;
};

int main(){
	int n;
	fstream writeFile;
	writeFile.open("abc.txt",ios::out);
	if(!writeFile){
		cout << "File not opened!";
		exit(0);
	}
	cout << "How many items?: ";
	cin >> n;
	Store *ptr = new Store[n];
	cout << endl << "Enter details of items:" << endl;
	for(int i=0;i<n;i++){
		cout << "For object " << i+1 << ":" << endl;
		cout << "Store Id: ";
		cin >> (ptr+i)->storeID;
		writeFile << (ptr+i)->storeID << endl;
		fflush(stdin);
		cout << "Item Name: ";
		getline(cin,(ptr+i)->itemName);
		writeFile << (ptr+i)->itemName << endl;
		cout << "Item Price: ";
		cin >> (ptr+i)->itemPrice;
		writeFile << (ptr+i)->itemPrice << endl;;
		cout << endl;
	}
	cout << endl << "Written into file successfully!" << endl;
	writeFile.close();
	fstream readFile;
	readFile.open("abc.txt", ios::in);
	if(!readFile){
		cout << "File not opened!";
		exit(0);
	}
	Store *ptr2 = new Store[n];
	cout << endl << "Details of items are:" << endl;
	for(int i=0;i<n;i++){
		readFile >> (ptr2+i)->storeID;
		readFile.ignore();
		cout << "Store ID: " << (ptr2+i)->storeID << endl;
		getline(readFile, (ptr2+i)->itemName);
		cout << "Item Name: " << (ptr2+i)->itemName << endl;
		readFile >> (ptr2+i)->itemPrice;
		cout << "Item Price: " << (ptr2+i)->itemPrice;
		cout << endl << endl;
	}
	readFile.close();
	return 0;
}
