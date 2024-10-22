#include<iostream>
using namespace std;

class Employee
{
    private:
        int id;
        float salary;
        string name,position;
    public:
        void setData(int n)
        {
            cout << "Enter details of employee " << n << endl;
            cout << "Id: ";
            cin >> id;
            fflush(stdin);
            cout << "Name: ";
            getline(cin,name);
            cout << "Position: ";
            getline(cin,position);
            cout << "Salary: ";
            cin >> salary;
        }
        void displayData(int n)
        {
            cout << "Details of employee " << n << ": " << endl;
            cout << "Id: " << id <<endl;
            cout << "Name: " << name <<endl;
            cout << "Position: " << position <<endl;
            cout << "Salary: " << salary <<endl;
        }
};

int main()
{
    Employee e[3];
    int i;
    for(i=0;i<3;i++)
    {
        e[i].setData(i+1);
    }
    cout << "Details of employee are: " << endl;
    for(i=0;i<3;i++)
    {
        e[i].displayData(i+1);
    }
    return 0;
}
