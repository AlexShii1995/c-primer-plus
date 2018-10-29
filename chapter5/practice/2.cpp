#include<iostream>
#include<array>
const int ArSize = 16;
int main()
{
	using namespace std;
	array<long double, 16> a;
	a[1] = a[0] = 1;
	for(int i = 2; i < ArSize; i++)
		a[i] = a[i-1] * i;
	for (int i = 0; i < ArSize; i++)
		std::cout << i << "! = " << a[i] << std::endl;
	return 0;
}
