// basic to class data conversion using constructor

#include<iostream>
using namespace std;

class Time
{
	private:
		int hr,min;
	public:
		Time(int a)
		{
			hr = a/60;
			min = a%60;
		}
		void display()
		{
			cout << "Time: " << endl << hr << "hours ";
			cout << min << "minutes";
		}
};

int main()
{
	int minute;
	cout << "Enter time in minutes: ";
	cin >> minute;
	Time t = minute;
	t.display();
	return 0;
}
