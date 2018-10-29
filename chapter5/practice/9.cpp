#include<iostream>
#include<string>
int main()
{
	using namespace std;
	string word;
	int sum = 0;
	cout << "Enter words (to stop, type the word done): " << endl;
	getline(cin, word);
	while (word != "done")
	{
		sum++;
		getline(cin,word);
	}
	cout << "You entered a total of " << sum << " words." << endl;
	return 0;
}
