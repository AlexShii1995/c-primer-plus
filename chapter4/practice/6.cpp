#include<iostream>
struct CandyBar
{
	char name[20];
	double weight;
	int energy;
};
int main()
{
	using namespace std;
	CandyBar snacks[3] = {
	{"Moka",3.4,34},
	{"Sula",5.3,21},
	{"Bona",3.3,11}

};
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
