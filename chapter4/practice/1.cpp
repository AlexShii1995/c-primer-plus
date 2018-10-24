#include<iostream>
#include<string>
int main()
{
	using namespace std;
	string s1;
	string s2;
	char a;
	char b;
	int age;
	cout << "What is your first name? ";
	cin >> s1;
	cout << "What is your last name? ";
	cin >> s2;
	cout << "What letter grade do you deserve? ";
	cin >> a;
	b = a + 1;
	cout << "What is your age? ";
	cin >> age;
	cout << "Name: " << s2 << " " << s1 << endl;
	cout << "Grade: " << b << endl;
	cout << "Age: " << age << endl;
	return 0;
}
