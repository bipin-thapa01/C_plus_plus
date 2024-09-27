#include<iostream>
using namespace std;

template <typename T>
void swap2(T& a,T& b)
{
	T temp = a;
	a = b;
	b = temp;
}

int main()
{
	int n1,n2;
	float N1,N2;
	cout << "Enter two integers: ";
	cin >> n1 >> n2;
	swap2<int>(n1,n2);
	cout << "After swap: " << n1 << " " << n2;
	cout << endl << "Enter two float numbers: ";
	cin >> N1 >> N2;
	swap2<float>(N1,N2);
	cout << "After swap: " << N1 << " " << N2;
	return 0;
}
