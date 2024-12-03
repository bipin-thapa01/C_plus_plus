//default argument
#include<iostream>
using namespace std;

float pe(float m,float h,float g=9.8){
	return m*g*h;
}

float area(float r, float pi=22/7.0){
	return pi*r*r;
}

float d2m(float d,float rate=130){
	return d*rate;
}

int main(){
	int choice;
	float d1,d2;
	label:
	cout << "Menu: " << endl;
	cout << "1. Potential Energy" << endl;
	cout << "2. Area of circle" << endl;
	cout << "3. Dollar to Nepali" << endl;
	cout << "Enter your choice: ";
	cin >> choice;
	cout << endl;
	switch (choice){
		case 1:
			cout << "Enter mass and height: ";
			cin >> d1 >> d2;
			cout << "Potential Energy is: " << pe(d1,d2);
		break;
		case 2:
			cout << "Enter radius of circle: ";
			cin >> d1;
			cout << "Area of circle: " << area(d1);
		break;
		case 3:
			cout << "Enter money in dollar: ";
			cin >> d1;
			cout << "Money in rupee: " << d2m(d1);
		break;
	}
	char c;
	cout << endl << endl << "Do you want to try again?[y/n]: ";
	cin >> c;
	if(c=='y'||c=='Y'){
		cout << endl << endl;
		goto label;
	}
	return 0;
}
