#include<iostream>
using namespace std;

int main()
{
	int num;
	try_again:
	cout << "Enter a even number: ";
	cin >> num;
	try
	{
		if(num%2!=0)
		{
			throw num;
		}
		else if(num == 0)
		{
			throw "Zero is neither even nor odd. Try again!";
		}
		cout << num << " is even";
	}
	catch(int a)
	{
		cout << a << " is not even. Try to enter a even number!" << endl;
		goto try_again;
	}
	catch(const char* error)
	{
		cout << error << endl;
		goto try_again;
	}
	return 0;
}
