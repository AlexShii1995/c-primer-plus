#include<iostream>
#include<string>
using namespace std;
struct car
{
	string company;
	int year;
};
int main()
{
	int num;
	cout << "How many cars do you want to catalog? ";
	cin >> num;
	car * cars = new car [num];
	int i = 0;
	char ch;
	while (i < num)
	{
		cout << "Please enter the make: ";
		cin.get();
		getline(cin,cars[i].company);
		cout << "Please enter the year of made: ";
		cin >> cars[i].year;
		i++;
	}
	i = 0;
	cout << "Here is your collection: " << endl;
	while (i < num)
	{
		cout << cars[i].year << "\t" << cars[i].company << endl;
		i++;
	}
	return 0;
}
