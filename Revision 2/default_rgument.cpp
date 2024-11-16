//default argument
#include<iostream>
using namespace std;

float area(float r,float pi=22/7.0){
	return pi*r*r;
}

float circumference(float r,float pi=22/7.0){
	return 2*pi*r;
}

int main(){
	float r;
	int choice;
	char option;
	label:
	cout << "Menu";
	cout << endl << "1. Area of Circle";
	cout << endl << "2. Circumference of Circle";
	cout << endl << "Enter your choice: ";
	cin >> choice;
	cout << "Enter radius of circle: ";
	cin >> r;
	switch (choice){
		case 1:
			cout << "Area of circle: " << area(r);
		break;
		case 2:
			cout << "Circumference of circle: " << circumference(r);
		break;
	}
	cout << endl << "Do you want to try again?[Y/y]: ";
	cin >> option;
	if(option == 'y'||option == 'Y'){
		cout << endl << endl;
		goto label;
	}
	return 0;
}
