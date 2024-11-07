//class to class using constructor
#include<iostream>
using namespace std;

class X{
	private:
		int min;
	public:
		X(int a)
		{
			min = a;
		}
		int getMin()
		{
			return min;
		}
};

class Y{
	private:
		int sec;
	public:
		Y(X& obj)
		{
			sec = obj.getMin()*60;
		}
		void display()
		{
			cout << "Time in sec: " << sec;
		}
};

int main()
{
	int min;
	cout << "Enter time in minute: ";
	cin >> min;
	X Time1(min);
	Y Time2 = Time1;
	Time2.display();
	return 0;
}
