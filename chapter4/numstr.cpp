#include<iostream>
#include<cstring>
int main()
{
	using namespace std;
	cout << "What year was your house built?\n";
	int year;
	cin >> year;
	cout << "What is its street address?\n";
	char address[90];
	cin.get();
	cin.getline(address,80);
	cout << "Year built: " << year << endl;
	cout << "Address:" << address << endl;
	cout << "Done!\n";
	return 0;
}
