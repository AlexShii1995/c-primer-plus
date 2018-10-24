#include<iostream>
#include<cstring>
int main()
{
	using namespace std;
	const int ArtSize = 20;
	char name[ArtSize];
	char dessert[ArtSize];

	cout << "Enter your name:\n";
	cin >> name;
	cout << "Enter your favourite dessert:\n";
	cin >> dessert;
	cout << "I have some delicious " << dessert;
	cout << " for you, " << name << ".\n";
	return 0;
}
