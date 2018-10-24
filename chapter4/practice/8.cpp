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
	cout << "Enter the R: ";
	cin >> p->R;
	//cin.get();
	cout << "Enter the brand name: ";
	cin.get();
	cin.get(p->company, 20);
	cout << "Enter the weight: ";
	cin >> p->weight;

	cout << "company: " << p->company << endl;
	cout << "R: " << p->R << endl;
	cout << "weight: " << p->weight << endl;
	return 0;
}
