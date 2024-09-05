//friend function revision
#include<iostream>
using namespace std;

class Distance
{
	private:
		float km;
	public:
		Distance(float a)
		{
			km = a;
		}
		friend float intoMeter(Distance&);
};

float intoMeter(Distance& obj)
{
	return obj.km*1000;
}

int main()
{
	float km;
	cout << "Emter distance in kilometer: ";
	cin >> km;
	Distance d(km);
	cout << "Distance in meter: " << intoMeter(d) << " m";
	return 0;
}
