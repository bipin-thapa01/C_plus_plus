//Exception Handling
#include<iostream>
using namespace std;

int main()
{
	int num;
	label:
	cout << "Enter an odd number: ";
	cin >> num;
	try{
		if(num%2==0)
		{
			throw "Number is not odd!";
		}
		else
		{
			cout << "The number you have eneterd is indeed odd.";
		}
	}
	catch(const char* error)
	{
		cout << error << endl;
		goto label;
	}
	return 0;
}
