#include<iostream>
#include<string>
struct pizza
{
	char company[20];
	int R;
	double weight;
};
int main()
{
	using namespace std;
	pizza * p = new pizza;
	cout << "Enter the brand name: ";
	cin.getline(p->company, 20);
	cout << "Enter the R: ";
	cin >> p->R;
	cout << "Enter the weght: ";
	cin >> p->weight;

	cout << "company: " << p->company << endl;
	cout << "R: " << p->R << endl;
	cout << "weight: " << p->weight << endl;
	return 0;
}
