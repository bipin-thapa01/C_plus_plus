//Default Argument
#include<iostream>
using namespace std;

int weight(float m, float g=9.8){
	return m*g;
}

int main(){
	float mass;
	cout << "Enter the mass of the body: ";
	cin >> mass;
	cout << "Weight of the body is: " << weight(mass) << " kg";
	return 0;
}
