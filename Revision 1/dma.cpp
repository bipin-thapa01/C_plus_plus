//dynamic memory allocation
#include<iostream>
using namespace std;

int main(){
	int n,cnt = 0;
	cout << "How many numbers?: ";
	cin >> n;
	int *p = new int[n];
	cout << "Enter numbers: " << endl;
	for(int i=0; i<n; i++){
		cout << "Enter number " << i+1 << ": ";
		cin >> *(p+i);
	}
	cout << "Prime numbers are: ";
	for(int i=0; i<n; i++){
		for(int j=1; j<=*(p+i); j++){
			if(*(p+i)%j==0){
				cnt++;
			}
		}
		if(cnt == 2){
			cout << *(p+i) << " ";
		}
		cnt = 0;
	}
	return 0;
}
