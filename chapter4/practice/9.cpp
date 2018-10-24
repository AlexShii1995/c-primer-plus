#include<iostream>
#include<string>
using namespace std;
struct CandyBar
{
	string name;
	double weight;
	int energy;
};
int main()
{
	CandyBar * snacks = new CandyBar [3];
	snacks[0].name = "Moka";
	snacks[0].weight = 3.4;
	snacks[0].energy = 34;
	snacks[1].name = "Sula";
	snacks[1].weight = 5.3;
	snacks[1].energy = 21;
	snacks[2].name = "Bond";
	snacks[2].weight = 2.1;
	snacks[2].energy = 3;


//	snacks[0] = {
//		"Moka",
//		3.4,
//		34
//	};
//	snacks[1] = {
//		"Sula",
//		5.3,
//		21
//	};
//	snacks[2] = {
//		"Bona",
//		3.3,
//		11
//	};
	cout << snacks[0].name << "\t" << snacks[0].weight << "\t" << snacks[0].energy << endl;
	cout << snacks[1].name << "\t" << snacks[1].weight << "\t" << snacks[1].energy << endl;
	cout << snacks[2].name << "\t" << snacks[2].weight << "\t" << snacks[2].energy << endl;
	return 0;
}
