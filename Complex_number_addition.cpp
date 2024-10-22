#include<iostream>
using namespace std;

class Complex
{
	private:
		float r,i;
	public:
		void input()
		{
			cout << endl << "Enter a complex number" << endl;
			cout << "enter real part: ";
			cin >> r;
			cout << "enter imaginary part: ";
			cin >> i;
			cout << endl;
		}
		
		Complex operator +(const Complex& obj)
		{
			Complex temp;
			temp.r = r + obj.r;
			temp.i = i + obj.i;
			return temp;
		}
		
		void output()
		{
			cout << "Sum: " << r << "+ " << i <<"i";
		}
};

int main()
{
	Complex num1,num2,sum;
	num1.input();
	num2.input();
	sum = num1 + num2;
	sum.output();
	return 0;
}
