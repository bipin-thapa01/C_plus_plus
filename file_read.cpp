#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
	string line;
	ifstream content("C:\\Users\\Acer\\lol.txt");
	if(content.is_open())
	{
		while(getline(content,line))
		{
			cout << line << endl;
		}
		content.close();
	}
	else
	{
		cout << "File open error!";
	}
	return 0;
}
