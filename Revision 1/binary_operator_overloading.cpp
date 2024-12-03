//binary operator overloading
#include<iostream>
using namespace std;

class complex{
	float r,i;
	public:
		complex(float a,float b){
			r = a;
			i = b;
		}
		complex operator +(complex& obj){
			complex temp(0,0);
			temp.r = r + obj.r;
			temp.i = i + obj.i;
			return temp;
		}
		void display(){
			cout << "Complex Number: " << r << " + i" << i;
		}
};

int main(){
	float r1,i1,r2,i2;
	cout << "Enter 1st complex number: ";
	cin >> r1 >> i1;
	cout << "Enter 2nd complex number: ";
	cin >> r2 >> i2;
	complex c1(r1,i1),c2(r2,i2),sum(0,0);
	sum = c1+c2;
	sum.display();
	return 0;
}
