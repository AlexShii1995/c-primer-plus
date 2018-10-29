#include<iostream>
int main()
{
	using namespace std;
	long double i = 0;
	long double k;
	//while(cin.get() != 0)
	do
	{
		cout << "Please enter a number: ";
		cin >> k;
		cout << "Your enter is: " << k << endl;
		i += k;
		cout << "Now, the num is: " << i << endl;
	}while(k != 0);
	return 0;
}
