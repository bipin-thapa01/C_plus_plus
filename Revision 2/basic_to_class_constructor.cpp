//basic to class conversion using constructor
#include<iostream>
using namespace std;

class X{
	private:
		int min, sec;
	public:
		X(int s){
			min = s/60;
			sec = s%60;
		}
		void display(){
			cout << "Time: " << min << " min & " << sec << " sec";
		}
};

int main(){
	int sec;
	cout << "Enter time in seconds: ";
	cin >> sec;
	X obj = sec;
	obj.display();
	return 0;
}
