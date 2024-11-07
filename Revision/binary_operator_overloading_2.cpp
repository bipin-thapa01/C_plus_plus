//binary operator overloading
#include<iostream>
using namespace std;

class Complex
{
	private:
		int real,imaginary;
	public:
		Complex(int r, int i)
		{
			real = r;
			imaginary = i;
		}
		Complex operator -(Complex& obj)
		{
			Complex temp(0,0);
			temp.real = real - obj.real;
			temp.imaginary = imaginary - obj.imaginary;
			return temp;
		}
		void display()
		{
			cout << "Complex number: " << real << "+ " <<imaginary << "i";
		}
};

int main()
{
	int r1,r2,i1,i2,s;
	cout << "Enter 1st complex number\'s real and imaginary part: ";
	cin >> r1 >> i1;
	cout << "Enter 2nd complex number\'s real and imaginary part: ";
	cin >> r2 >> i2;
	Complex c1(r1,i1),c2(r2,i2),diff(0,0);
	diff = c1 - c2;
	diff.display();
	return 0;
}
