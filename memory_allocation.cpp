#include<iostream>
using namespace std;
int main()
{
	int num,choice,rev=0,i,j,temp,*p;
	top:
	cout << "Menu" << endl;
	cout << "1. Palindrome" << endl;
	cout << "2. Ascending order" << endl;
	cout << "Enter your choice: ";
	cin >> choice;
	switch (choice)
	{
		case 1:
			p = new int;
			cout << "Enter a number: ";
			cin >> *p;
			num = *p;
			while(num!=0)
			{
				rev = rev*10+num%10;
				num/=10;
			}
			if(rev == *p)
			{
				cout << *p << "is palindrome.";
			}
			else
			{
				cout << *p << "is not palindrome.";
			}
			delete p;
		break;
		case 2:
			cout << "Enter how many numbers?: ";
			cin >> num;
			p = new int[num];
			cout << "Enter numbers: " << endl;
			for(i=0;i<num;i++)
			{
				cout << "Enter number " << i+1 << ": ";
				cin >> *(p+i);
			}
			for(i=0;i<num-1;i++)
			{
				for(j=i+1;j<num;j++)
				{
					if(*(p+i)>*(p+j))
					{
						temp = *(p+i);
						*(p+i) = *(p+j);
						*(p+j) = temp;
					}
				}
			}
			cout << "Numbers in ascending order is:" << endl;
			for(i=0;i<num;i++)
			{
				cout << *(p+i) << " ";
			}
			cout << endl << "Largest number: " << *(p+num-1);
			cout << endl << "Smallest number: " << *(p);
			delete[] p;
		break;
		default:
			cout << "Invalid Input" << endl;
			goto top;	
	}
	return 0;
}
