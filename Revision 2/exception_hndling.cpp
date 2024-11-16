//exception handling
#include<iostream>
using namespace std;

int main(){
	int num;
	label:
	cout << "Enter an odd number: ";
	cin >> num;
	try{
		if(num%2==0){
			throw "The number is even.";
		}
		cout << num << " is odd.";
	}
	catch(const char* error){
		cout << error;
		cout << endl << "Try again!" << endl;
		goto label;
	}
	return 0;
}
