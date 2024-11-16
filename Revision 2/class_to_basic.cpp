//class to basic
#include<iostream>
using namespace std;

class X{
	private:
		int min, sec;
	public:
		X(int a,int b){
			min = a;
			sec = b;
		}
		operator float(){
			return min+sec/60.0;
		}
};

int main(){
	int min,sec;
	cout << "Enter time in min & sec: ";
	cin >> min >> sec;
	X time(min,sec);
	float ans = time;
	cout << "Time in minute: " << ans;
	return 0;
}
