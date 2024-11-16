//Recursion
#include<iostream>
using namespace std;

int fibo(int n){
	if(n==1){
		return 0;
	}
	else if(n==2){
		return 1;
	}
	else{
		return fibo(n-1)+fibo(n-2);
	}
}

int main(){
	int n;
	cout << "Enter how many terms of fibonacci series: ";
	cin >> n;
	cout << "Fibonacci series is:" <<  endl;
	for(int i=1; i<=n; i++){
		cout <<  fibo(i) << " ";
	}
	return 0;
}
