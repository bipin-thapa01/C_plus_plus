//exception handling
#include<iostream>
using namespace std;

int main(){
	int n;
	label:
	cout << "Enter an even number: ";
	cin >> n;
	try{
		if(n%2!=0){
			throw "The number is odd!";
		}
		cout << "The number is even!";
	}
	catch(const char* error){
		cout << error;
		cout << endl << "Try again!" << endl;
		goto label;
	}
	return 0;
}
