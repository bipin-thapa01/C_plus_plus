//class to class using operator overloading
#include<iostream>
using namespace std;

class X{
	private:
		int sec;
	public:
		X(int a){
			sec = a;
		}
		int getX(){
			return sec;
		}
};

class Y{
	private:
		float min;
	public:
		void operator =(X& obj){
			min = obj.getX()/60.0;
		}
		void display(){
			cout << "Time in minute: " << min;
		}
};

int main(){
	int sec;
	cout << "Enter time in second: ";
	cin >> sec;
	X time1(sec);
	Y time2;
	time2 = time1;
	time2.display();
	return 0;
}
