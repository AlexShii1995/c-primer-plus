#include<iostream>
#include<cstring>
int main()
{
	using namespace std;
	char ch[20];
	int i = 0;
	cout << "Enter words (to stop, type the word done): " << endl;
	cin.getline(ch,20);
	while (strcmp(ch,"done"))
	{
		i++;
		cin.getline(ch, 20);
		cout << ch << endl;
	}
	cout << "You entered a total of " << i << " words." << endl;
	return 0;
}
