#include<iostream>
using namespace std;

template <typename T>
void ascending(T arr[])
{
	int i,j;
	T temp;
	for(i=0;i<9;i++)
	{
		for(j=i+1;j<10;j++)
		{
			if(arr[i]>arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	cout << endl << "In ascending order: " << endl;
	for(i=0;i<10;i++)
	{
		cout << arr[i] << endl;
	}
}

int main()
{
	int arr[10];
	float array[10];
	cout << "Enter integer elements of array: " << endl;
	for(int i=0;i<10;i++)
	{
		cout << "Enter element " << i+1 << ": ";
		cin >> arr[i];
	}
	ascending<int>(arr);
	cout << endl << "Enter float elements of array: " << endl;
	for(int i=0;i<10;i++)
	{
		cout << "Enter element " << i+1 << ": ";
		cin >> array[i];
	}
	ascending<float>(array);
	return 0;
}
