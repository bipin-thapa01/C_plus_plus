//unary operator overloading postfix
#include<iostream>
using namespace std;

class X{
	private:
		int num;
	public:
		X(int a)
		{
			num = a;
		}
		void operator ++(int)
		{
			num++;
		}
		int getNum()
		{
			return num;
		}
};

int main()
{
	int num;
	cout << "Enter a number: ";
	cin >> num;
	X obj(num);
	obj++;
	cout << "Answer: " << obj.getNum();
	return 0;
}
