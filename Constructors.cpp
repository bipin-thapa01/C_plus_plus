#include<iostream>
using namespace std;
class Area
{
	private:
		int l,w;
	public:
		Area(int a, int b)
		{
			l=a;
			w=b;
		}
		float findArea();
};
float Area :: findArea()
{
	return l*w;
}
int main()
{
	int a,b;
	cout << "Enter length and width: ";
	cin >> a >> b;
	Area ar(a,b);
	cout << "Area is " << ar.findArea();
	return 0;
}
