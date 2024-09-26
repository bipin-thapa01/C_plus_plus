#include<iostream>
#include<iomanip>
#include<cstring>
using namespace std;

class X
{
	private:
		char str1[100];
	public:
		X()
		{
			strcpy(str1,"");
		}
		X(char a[])
		{
			strcpy(str1,a);
		}
		X operator +(X& obj)
		{
			X temp;
			strcat(str1,obj.str1);
			strcpy(temp.str1,str1);
			return temp;
		}
		void display()
		{
			cout << str1;
		}
};

int main()
{
	char str1[100],str2[100];
	cout << "Enter 1st string: ";
	cin.getline(str1,100);
	fflush(stdin);
	cout << "Enter 2nd string: ";
	cin.getline(str2,100);
	X obj1(str1),obj2(str2),ans;
	ans = obj1 + obj2;
	ans.display();
	return 0;
}
