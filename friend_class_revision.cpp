//friend class
#include<iostream>
using namespace std;

class Dollar;

class Aisi
{
	private:
		float value;
	public:
		Aisi(float a)
		{
			value = a;
		}
		friend class Dollar;
};

class Rupaiya
{
	private:
		float value;
	public:
		Rupaiya(float a)
		{
			value = a;
		}
		friend class Dollar;
};

class Dollar
{
	private:
		float value;
	public:
		void setValue(Aisi obj1,Rupaiya obj2)
		{
			value = obj1.value*62+obj2.value*130;
		}
		float getValue()
		{
			return value;
		}
};

int main()
{
	float aisi,rupaiya,dollar;
	cout << "Enter Indian rupee: ";
	cin >> aisi;
	cout << "Enter Nepali rupee: ";
	cin >> rupaiya;
	Aisi obj1(aisi);
	Rupaiya obj2(rupaiya);
	Dollar obj3;
	obj3.setValue(obj1,obj2);
	dollar = obj3.getValue();
	cout << "In dollar " << dollar;
	return 0;
}
