//basic to class using operator overloading
#include<iostream>
using namespace std;

class X{
	int min,sec;
	public:
		void operator =(int a){
			min = a/60;
			sec = a%60;
		}
		void display(){
			cout << "Time:" << endl;
			cout << min << " minutes & " << sec << " second";
		}
};

int main(){
	int t;
	cout << "Enter time in second: ";
	cin >> t;
	X obj;
	obj = t;
	obj.display();
	return 0;
}
