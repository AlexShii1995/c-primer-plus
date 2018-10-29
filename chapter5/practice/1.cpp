#include<iostream>
using namespace std;
int main()
{
	int i,j;
	cout << "Enter an integer number: ";
	cin >> i;
	cout << "Enter another integer number: ";
	cin >> j;
	double ret;
	if (j >= i)
		ret = (i + j)/2 * (j - i + 1);
	else
		ret = (i + j)/2 * (i - j + 1);
	cout << "the ret is: " << ret << endl;
	return 0;
}
