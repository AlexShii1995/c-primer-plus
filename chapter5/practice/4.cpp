#include<iostream>
int main()
{
	using namespace std;
	double a = 110;
	double b = 105;
	int i = 1;
	while (a > b)
	{
		a += 10;
		b *= 1.05;
		i++;
	}
	cout << i << " years later, Cleo will get more profit than Daphne!" << endl;
	cout << "Cleo will get $" << b << endl;
	cout << "Daphne will get $" << a << endl;
	return 0;
}
