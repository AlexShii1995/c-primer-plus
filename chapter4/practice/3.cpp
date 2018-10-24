#include<iostream>
#include<cstring>
int main()
{
	using namespace std;
	char fname[20];
	char lname[20];
	char name[42];
	cout << "Enter your first name: ";
	cin >> fname;
	cout << "Enter your last name: ";
	cin >> lname;
	strcat(name, lname);
	strcat(name, ", ");
	strcat(name, fname);
	cout << "Here is the information in a single string: " << name << endl;

	return 0;
}
