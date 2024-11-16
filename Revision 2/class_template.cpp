//class template
#include<iostream>
using namespace std;

template <class T>
class X{
	private:
		T num;
	public:
		X(T a){
			num = a;
		}
		T square(){
			return num*num;
		}
};

int main(){
	int n;
	float N;
	cout << "Enter an integer number: ";
	cin >> n;
	X <int>obj1(n);
	cout << "Integer square number: " << obj1.square();
	cout << endl << "Enter a float number: ";
	cin >> N;
	X <float>obj2(N);
	cout << "Float square number: " << obj2.square();
	return 0;
}
