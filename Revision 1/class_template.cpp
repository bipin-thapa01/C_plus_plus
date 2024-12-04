//class template
#include<iostream>
using namespace std;

template <class T>
class X{
	T a,b;
	public:
		X(T n1,T n2){
			a = n1;
			b = n2;
		}
		T sum(){
			return a+b;
		}
};

int main(){
	int a,b;
	float p,q;
	string m,n;
	cout << "Enter two integers: ";
	cin >> a >> b;
	cout << "Enter two float numbers: ";
	cin >> p >> q;
	fflush(stdin);
	cout << "Enter first string: ";
	getline(cin,m);
	cout << "Enter second string: ";
	getline(cin,n);
	X<int> obj1(a,b);
	X<float> obj2(p,q);
	X<string> obj3(m,n);
	cout << endl;
	cout << obj1.sum();
	cout << endl;
	cout << obj2.sum();
	cout << endl;
	cout << obj3.sum();
	return 0;
}
