#include<iostream>
#include<array>
#include<string>
int main()
{
	using namespace std;
	array<string, 12> month;
	month = {"January", "Febrary", "March", "April", "May","June","July","Agust","September","October","December","November"};
	array<int, 12> sales;
	long long num = 0LL;
	for(int i=0; i<12; i++)
	{
		cout << "Enter the sales of " << month[i] << ": ";
		cin >> sales[i];
		num += sales[i];
	}
	cout << "Sales of this year is: " << num << endl;
	return 0;
}
