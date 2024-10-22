#include<iostream>
using namespace std;

class complex1
{
	private:
		float real, im;	
	public:
		complex1()
		{
			real = 0;
			im  = 0;
		}
		complex1(float a,float b)
		{
			real = a;
			im = b;
		}
		friend complex1 operator +(complex1& , complex2&);
		void display()
		{
			cout << endl << "Complex sum: ";
			cout << real << "+ " << im  << " i";
		}
};

class complex2
{
	private:
		float real,im;
	public:
		complex2(float a, float b)
		{
			real = a;
			im = b;
		}
		friend complex1 operator +(complex1& , complex2&);
};

complex1 operator +(complex1& obj1, complex2& obj2)
{
	complex1 temp;
	temp.real = obj1.real + obj2.real;
	temp.im = obj1.im + obj2.im;
	return temp;
}

int main()
{
	float r1,i1,r2,i2;
	cout << "Enter 1st complex number: " << endl;
	cout << "Enter real part: ";
	cin >> r1;
	cout << "Enter imaginary part: ";
	cin >> i1;
	complex1 c1(r1,i1), ans;
	cout << endl << "Enter 1st complex number: " << endl;
	cout << "Enter real part: ";
	cin >> r2;
	cout << "Enter imaginary part: ";
	cin >> i2;
	complex2 c2(r2,i2);
	ans = c1 + c2;
	ans.display();
	return 0;
}
