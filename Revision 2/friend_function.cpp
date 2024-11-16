//friend function
#include<iostream>
using namespace std;

class Y;
class X{
	private:
		float km;
	public:
		X(float a){
			km = a;
		}
		friend float sum(X&,Y&);
};

class Y{
	private:
		int m;
	public:
		Y(int a){
			m = a;
		}
		friend float sum(X&,Y&);
};

float sum(X& obj1,Y& obj2){
	return obj1.km+obj2.m/1000.0;
}

int main(){
	float km;
	int m;
	cout <<  "Enter 1st distance in kilometer: ";
	cin >> km;
	cout <<  "Enter 2nd distance in meter: ";
	cin >> m;
	X obj1(km);
	Y obj2(m);
	cout << "Total distance: " <<  sum(obj1,obj2) <<  " km";
	return 0;
}
