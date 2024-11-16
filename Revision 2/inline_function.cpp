//inline function
#include<iostream>
using namespace std;

inline bool checkOdd(int a){
	if(a%2!=0){
		return true;
	}
	else{
		return false;
	}
}

int main(){
	int num;
	cout << "Enter a number: ";
	cin >> num;
	if(checkOdd(num)){
		cout << "Number is odd.";
	}
	else{
		cout << "Number is even.";
	}
	return 0;
}
