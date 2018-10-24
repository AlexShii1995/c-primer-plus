#include<iostream>
struct CandyBar
{
	char brand[20];
	double weight;
	int energy;
};

int main()
{
	using namespace std;
	CandyBar snack = {
		"Mocha Munch",
		2.3,
		350
	};
	cout << "We have a kind of Candybar called: " << snack.brand << endl;
	cout << "It\'s weight is: " << snack.weight << "pund" << endl;
	cout << "It contains energy of: " << snack.energy << "Cal" << endl;
	return 0;
}
