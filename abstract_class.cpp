#include<iostream>
using namespace std;

class X
{
	public:
		virtual void a() = 0;
};

class Y : public X
{
	public:
		void a()
		{
			cout << "This is child class";
		}
};

int main()
{
	Y obj;
	obj.a();
	return 0;
}
