#include<iostream>
#include<string>
int main()
{
	using namespace std;
	string s1;
	string s2;
	string s3;
	cout << "Enter your first name: ";
	cin >> s1;
	cout << "Enter your last name: ";
	cin >> s2;
	s3 = s2 + ", " + s1;
	//s3 += s1;
	cout << "Here is the information in a single string: " << s3 << endl;
	return 0;
}
