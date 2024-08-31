#include<iostream>
using namespace std;

class p
{
	public:
		virtual void fxn()
		{
			cout << "Parent class";
		}
};

class c : public p
{
	public:
		void fxn()
		{
			cout << "Child class";
		}
};

int main()
{
	p *ptr = new c;
	ptr->fxn();
	return 0;
}
