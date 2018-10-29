#include<iostream>
#include<array>
#include<string>
const int years = 3;
const int months = 12;
int main()
{
	using namespace std;
	array<string, 12> month = {"January", "Febrary", "March", "April", "May","June","July","Agust","September","October","December","November"};
	long long sales[years][months]; 
	long long allNum = 0LL;
	array<int, 3> year = {2016, 2017, 2018};
	array<long long, 3> num = {0, 0, 0}; 
	for(int i=0; i<3; i++)
	{
		cout << "sales of year " << year[i] << " : " << endl;
		for(int j=0; j<12; j++)
		{
			cout << "Enter the sales of " << month[j] << ": ";
			cin >> sales[i][j];
			num[i] += sales[i][j];
		}
		cout << "Total sales of this year " << year[i] << " : " << num[i] << endl;
		allNum += num[i];
	}
	cout << "Total sales of all these years is: " << allNum << endl;
	return 0;
}
