#include<iostream>
using namespace std;

class Str
{
	private:
		string a;
	public:
		Str()
		{
			a="";
		}
		void input()
		{	
			cout << "Enter string: ";
			cin >> a;
		}
		Str operator +(Str obj)
		{
			Str temp;
			temp.a  = a + obj.a;
			return temp;
		}
		void display()
		{
			cout << "Concatenated string: " << endl;
			cout << a;
		}
};

int main()
{
	Str obj1,obj2,ans;
	obj1.input();
	obj2.input();
	ans = obj1 + obj2;
	ans.display();
	return 0;
}
