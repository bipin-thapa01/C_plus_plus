//class to class using casting operator
#include<iostream>
using namespace std;

class Y{
	private:
		int rs;
	public:
		Y(int a){
			rs = a;
		}
		void display(){
			cout << "Money in RS:  " << rs;
		}
};
class X{
	private:
		int dollar;
	public:
		X(int a){
			dollar = a;
		}
		operator Y(){
			Y temp(dollar*130);
			return temp;
		}
};

int main(){
	int d;
	cout << "Enter money in dollar: ";
	cin >> d;
	X D(d);
	Y R(0);
	R = D;
	R.display();
	return 0;
}
