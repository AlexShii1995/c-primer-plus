#include<iostream>
#define MAX 33
using namespace std;
char *decToBin(long num);
int main()
{
	long dec = -19;
	
	cout << "十进制数为: " << dec << endl;
	cout << "二进制数为: " << decToBin(dec) << endl;
	
	return 0;
}

char *decToBin(long num)
{
	char *arr;
	char tmp;
	int i, n;
	
	arr = (char *)malloc(sizeof(char) * MAX);
	n = 0;
	while(num > 0)
	{
		arr[n++] = num % 2 + '0';
		num /= 2;
	}
	
	for(i=0; i<n/2; i++)
	{
		tmp = arr[i];
		arr[i] = arr[n-1-i];
		arr[n-1-i] = tmp;
	}
	arr[n] = '\0';
	return arr;
}
