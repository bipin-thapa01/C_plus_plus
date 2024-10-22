//friend class

#include<iostream>
using namespace std;

class A;

class B
{
	private:
		int min;
	public:
		B(int a)
		{
			min = a;
		}
		friend class A;
};

class A
{
	private:
		int sec;
	public:
		A(int a)
		{
			sec = a;
		}
		int getTotalTime(B& obj)
		{
			return obj.min*60+sec;
		}
};

int main()
{
	int min,sec,ans;
	cout << "Enter 1st duration in min: ";
	cin >> min;
	cout << "Enter 2nd duration in sec: ";
	cin >> sec;
	B obj1(min);
	A obj2(sec);
	ans = obj2.getTotalTime(obj1);
	cout << "Total duration: " << ans " sec";
	return 0;
}
