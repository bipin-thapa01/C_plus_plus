//Dynamic Memory Allocation

#include<iostream>
using namespace std;

int main()
{
	int n,i,j;
	float temp;
	cout << "Enter how many number: ";
	cin >> n;
	float *ptr = new float[n];
	cout << "Enter numbers:" << endl;
	for(i=0;i<n;i++)
	{
		cout << "Enter number " << i+1 <<": ";
		cin >> *(ptr+i);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(*(ptr+i)<*(ptr+j))
			{
				temp = *(ptr+i);
				*(ptr+i) = *(ptr+j);
				*(ptr+j) = temp;
			}
		}
	}
	cout << endl << "Number in Descending order are: " << endl;
	for(i=0;i<n;i++)
	{
		cout << *(ptr+i) << " ";
	}
	delete[] ptr;
	return 0;
}
