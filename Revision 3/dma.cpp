//DMA
#include<iostream>
using namespace std;

int main(){
	int n,cnt = 0,k=0;
	cout << "Enter how many numbers: ";
	cin >> n;
	int *ptr = new int[n];
	cout << endl << "Enter " << n << " numbers: " << endl;
	for(int i=0; i<n; i++){
		cout << "Enter number " << i+1 << ": ";
		cin >> *(ptr+i);

	}
	int *prime = new int[n];
	for(int i = 0;i<n; i++){
		for(int j=1; j<=*(ptr+i); j++){
			if(*(ptr+i)%j==0){
				cnt++;
			}
		}
		if(cnt==2){
			*(prime+k) = *(ptr+i);
			k++;
		}
		cnt = 0;
	}
	cout << "Prime numbers are: " << endl;
	for(int i=0;i<k;i++){
		cout << *(prime+i) << " ";
	}
	delete[] ptr;
	delete[] prime;
	return 0;
}
