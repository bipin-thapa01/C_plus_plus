//dynamic memory allocation
#include<iostream>
using namespace std;

int main(){
	int n,temp;
	cout << "Enter how many numbers: ";
	cin >> n;
	int *ptr = new int[n];
	cout << "Enter " << n << " different numbers:" << endl;
	for(int i=0;i<n;i++){
		cout << "Enter number " << i+1 << " : ";
		cin >> *(ptr+i);
	}
	for(int i=0;i<n-1;i++){
		for(int j =i+1;j<n;j++){
			if(*(ptr+i)<*(ptr+j)){
				temp = *(ptr+i);
				*(ptr+i) = *(ptr+j);
				*(ptr+j) = temp;
			}
		}
	}
	
	cout << endl << "Number in ascending order are:" << endl;
	for(int i=0;i<n;i++){
		cout << *(ptr+i) << " ";
	}
	return 0;
}
