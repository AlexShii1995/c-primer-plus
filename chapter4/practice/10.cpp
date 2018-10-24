#include<iostream>
#include<array>
int main()
{
	using namespace std;
	array<double, 3> ret;
	cout << "Enter the first time result: ";
	cin >> ret[0];
	cout << "Enter the second time result: ";
	cin >> ret[1];
	cout << "Enter the third time result: ";
	cin >> ret[2];
	double res = (ret[0] + ret[1] + ret[2])/3;
	cout << "Three times! average result is: " << res << endl;
	return 0;
}
