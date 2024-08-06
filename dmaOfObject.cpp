#include<iostream>
using namespace std;

class Students
{
	private:
		string name;
		int roll;
		float marksInCPP;
	public:
		void getData(string n,int r,float s)
		{
			name = n;
			roll = r;
			marksInCPP = s;
		}
		string checkStudentStatus(float passMarks=40.0)
		{
			if(marksInCPP>=passMarks)
			{
				return name;
			}	
			else
			{
				return "failed";
			}
		}
};

int main()
{
	int n,roll,i;
	float marks;
	string name,name2;
	cout << "Enter how many students?: ";
	cin >> n;
	Students *ptr = new Students[n];
	for(i=0;i<n;i++)
	{
		cout << "Enter details of student " << i+1 << endl;
		fflush(stdin);
		cout << "Enter name: ";
		getline(cin,name);
		cout << "Enter roll: ";
		cin >> roll;
		cout << "Enter marks in C++: ";
		cin >> marks;
		(ptr+i)->getData(name,roll,marks);
	}
	cout << endl << "List of students who are pass are:" << endl;
	for(i=0;i<n;i++)
	{
		if((ptr+i)->checkStudentStatus() == "failed")
		{
			continue;
		}
		else
		{
			cout << (ptr+i)->checkStudentStatus() << endl;
		}
	}
	return 0;
}
