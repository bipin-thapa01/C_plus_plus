//operator overloading for binary operator

#include<iostream>
using namespace std;

class A
{
	private:
		int real,im;
	public:
		A(int a,int b)
		{
			real = a;
			im = b;
		}
		A operator +(A& obj)
		{
			A temp(0,0);
			temp.real = real + obj.real;
			temp.im = im + obj.im;
			return temp;
		}
		void display()
		{
			cout << "Complex Number: " << endl;
			cout << real << " + " << im << "i";
		}
};

int main()
{
	int r1,i1,r2,i2;
	cout << "Enter 1st complex number:" << endl;
	cout << "Enter real part: ";
	cin >> r1;
	cout << "Enter imaginary part: ";
	cin >> i1;
	cout << "Enter 2nd complex number:" << endl;
	cout << "Enter real part: ";
	cin >> r2;
	cout << "Enter imaginary part: ";
	cin >> i2;
	A c1(r1,i1),c2(r2,i2),sum(0,0);
	sum = c1+c2;
	sum.display();
	return 0;
}
