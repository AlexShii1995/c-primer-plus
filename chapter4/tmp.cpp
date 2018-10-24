#include<iostream>
#include<typeinfo>
#include<stdio.h>
using namespace std;
int main()
{
	int i = 6;
	int c[3] = {1,2,3};
	int * k = c;
	cout << "This is C!" << k[0] << endl;
	char b[5];
	int * j = &i;
	//b[0] = i + '0';
	//cout << "This is: " << b[0] << endl;
	//cout << "It\'s type is: " << typeid(i).name() << endl;
	//printf("%d\n",~i);
	int ** p = &j;
	cout << "**p = " << **p << endl;
	cout << "*p = " << *p << endl;
	cout << "p = " << p << endl;
	cout << "&i = " << &i << endl;
	cout << "&p = " << &p << endl;
	cout << (int *) "Home of the jolly bytes";
	return 0;
}
