//Basic to Class using constructor

#include<iostream>
using namespace std;

class A
{
	private:
		int min,sec;
	public:
		A(int a)
		{
			min = a/60;
			sec = a%60;
		}
		void display()
		{
			cout << "Time:" << endl;
			cout << "Min: " << min;
			cout << endl << "Sec: " << sec;
		}
};

int main()
{
	int sec;
	cout << "Enter time in second: ";
	cin >> sec;
	A time = sec;
	time.display();
	return 0;
}
