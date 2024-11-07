//dynamic memory allocation

#include<iostream>
using namespace std;

int main()
{
	int num,i,*odd,*even,n,j=0,k=0;
	cout << "Enter how many numbers: ";
	cin >> num;
	odd = new int[num];
	even = new int[num];
	cout << "Enter " << num << " numbers: " <<endl;
	for(i=0;i<num;i++)
	{
		cout << "Enter number " << i+1 << ": ";
		cin >> n;
		if(n%2==0)
		{
			*(even+j) = n;
			j++;
		}
		else
		{
			*(odd+k) = n;
			k++;
		}
	}
	cout << "Even numbers are: " << endl;
	for(i=0;i<j;i++)
	{
		cout << *(even+i) << " ";
	}
	cout << endl << "Odd numbers are: " << endl;
	for(i=0;i<k;i++)
	{
		cout << *(odd+i) << " ";
	}
	delete[] even;
	delete[] odd;
	return 0;
}
