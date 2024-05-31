#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	char choice;
	int cnt=0,num,i,num2,arm=0,rev=0;
	label:
	cout << "\t\t\tMenu" << endl;
	cout << "a.Prime Number" << endl;
	cout << "b.Fibonacci Series" << endl;
	cout << "c.Factorial" << endl;
	cout << "d.Armstrong" << endl;
	cout << "e.Palindrome" << endl;
	cout << "Enter your choice: ";
	cin >> choice;
	switch (choice)
	{
		case 'a':
			cout << "Enter a number: ";
			cin >> num;
			for(int i=1;i<=num;i++)
			{
				if(num%i==0)
				{
					cnt++;
				}
			}
			if(cnt==2)
			{
				cout << num << " is prime.";
			}
			else
			{
				cout << num << " is not prime.";
			}
		break;
		case 'b':
			cout << "Enter upto which term?: ";
			cin >> num;
			int *fibonacci;
			fibonacci = new int[num];
			*(fibonacci+0) = 0;
			*(fibonacci+1) = 1;
			for(i=2;i<num;i++)
			{
				*(fibonacci+i) = *(fibonacci+i-1)+*(fibonacci+i-2);
			}
			cout << "Fibonacci series:" << endl;
			for(i=0;i<num;i++)
			{
				cout << *(fibonacci+i) << "\t";
			}
			delete fibonacci;
		break;
		case 'c':
			cout << "Enter a number: ";
			cin >> num;
			for(i=num-1;i>=1;i--)
			{
				num *= i;
			}
			cout << "Factorial is " << num;
		break;
		case 'd':
			cout << "Enter a number: ";
			cin >> num;
			num2 = num;
			while(num2!=0)
			{
				cnt++;
				num2/=10;
			}
			num2 = num;
			while(num2!=0)
			{
				arm += pow(num2%10,cnt);
				num2/=10;
			}
			if(num == arm)
			{
				cout << num << " is armstrong.";
			}
			else
			{
				cout << num << " is not armstrong.";
			}
		break;
		case 'e':
			cout << "Enter a number: ";
			cin >> num;
			num2 = num;
			while(num2!=0)
			{
				rev = rev*10+num2%10;
				num2/=10;
			}
			if(rev == num)
			{
				cout << num << " is palindrome.";
			}
			else
			{
				cout << num << " is not palindrome.";
			}
		break;
		default:
			cout << "Invalid input! Try again" << endl;
			goto label;
	}
	return 0;
}
