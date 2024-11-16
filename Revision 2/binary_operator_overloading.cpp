//binaary operator overloading
#include<iostream>
using namespace std;

class complex{
	private:
		int real, imaginary;
	public:
		complex(int a, int b){
			real = a;
			imaginary = b;
		}
		complex operator +(complex& obj){
			complex temp(0,0);
			temp.real = real + obj.real;
			temp.imaginary = imaginary + obj.imaginary;
			return temp;
		}
		void display(){
			cout << "Complex number: ";
			cout << real << " + i" << imaginary; 
		}
};

int main(){
	int r1,r2,i1,i2;
	cout << "Enter real and imaginary part of 1st complex number: ";
	cin >> r1 >> i1;
	cout << "Enter real and imaginary part of 2nd complex number: ";
	cin >> r2 >> i2;
	complex C1(r1,i1),C2(r2,i2),Sum(0,0);
	Sum = C1+C2;
	Sum.display();
	return 0;
}
