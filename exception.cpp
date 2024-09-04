//WAP for exception handling using menu 
//1. add
//2. subtract
//3. division
//4.Exit
//Ex 1. b = 0
//Ex 2. menu <4 or 0>
//Ex 3. three digit number
#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{
	float num1,num2;
	int choice;
	
		cout << "Enter two numbers: ";
		cin >> num1 >> num2;
		cout << "Menu" <<endl;
		cout << "1. Add" << endl;
		cout << "2. Subtract" <<endl;
		cout << "3. Divison" << endl;
		cout << "4.Exit" <<endl;
		cout << "Enter your choice: ";
		cin >> choice;
	try
	{
		if(choice>4||choice<1)
		{
			throw "Invalid choice!";
		}
		if(choice==1||choice==2)
		{
			if(num1>999||num1<100||num2>999||num2<100)
			{
				throw "Number in not in 3 digit range";
			}
		}
		if(choice==3)
		{
			if(num2==0)
			{
				throw "Value of b cannot be zero";
			}
		}
		switch (choice)
		{
			case 1:
				cout <<	num1+num2;
			break;
			case 2:
				cout << num1-num2;
			break;
			case 3:
				cout << num1/num2;
			break;
			case 4:
				exit(0);
			break;
		}
	} 
	catch(const char* error)
	{
		cout << error;
	}
	return 0;
}
