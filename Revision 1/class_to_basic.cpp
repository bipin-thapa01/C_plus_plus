//class to basic
#include<iostream>
using namespace std;

class X{
	int min, sec;
	public:
		X(int a,int b){
			min = a;
			sec = b;
		}
		operator int(){
			return min*60+sec;
		}
};

int main(){
	int min, sec;
	cout << "Enter time in minute & second: ";
	cin >> min >> sec;
	X obj(min,sec);
	int ans = obj;
	cout << "Time in second: " << ans;
	return 0;
}
