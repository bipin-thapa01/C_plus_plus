#include<iostream>
using namespace std;

int main()
{
	int num,cnt=0,i;
	cout << "Enter a number which satisfies following conditions:" << endl;
	cout << "1.Is Odd" << endl;
	cout << "2.Is of 3 digit" << endl;
	cout << "3.Is Prime" << endl;
	cout << "Enter a number: ";
	cin >> num;
	try
	{
		for(int i=1;i<=num;i++)
		{
			if(num%i==0)
			{
				cnt++;
			}
		}
		if(num%2==0)
		{
			throw num;
		}
		else if(cnt!=2)
		{
			throw false;
		}
		else if(!(num>99&&num<1000))
		{
			throw "number is not of 3 digit";
		}
		cout << endl << "The number you entered satisfies all given conditions!";
	}
	catch(bool a)
	{
		if(a == 0)
		{
			cout << "Number is not prime";
		}
	}
	catch(int num)
	{
		cout << "Number is not odd";
	}
	catch(const char* error)
	{
		cout << error;
	}
	return 0;
}
