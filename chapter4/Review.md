#Review
##1. 
```cpp
char actor[30];
short betsie[100];
float chuck[13];
long double dipsea[64];
```

##2. 
```cpp
#include<array>
array<char, 30>   actor;
array<short, 100> betsie;
array<float, 13>  chuck;
array<long double, 64> dipsea;
```

##3. 
```cpp
int a[5] = {1, 3, 5, 7, 9};
```

##4. 
```cpp
int even = a[0] + a[4];
```

##5. 
```cpp
using namespace std;
cout << ideas[1] << endl;
```

##6. 
```cpp
char s1[13] = "cheeseburger";
```

##7. 
```cpp
#include<string>
string s1 = "Waldorf Salad";
```

##8. 
```cpp
struct fish
{
	char kind[20];
	int weight[20];
	double length[20];
};
```

##9. 
```cpp
struct fish
{
	char kind[20];
	int weight[20];
	double length[20];
};
fish * shark = new fish;
shark = {
	"shark",
	100,
	2.1
};
delete shark;
```

##10. 
```cpp
enum Response {Yes = 1, No = 0, Maybe = 2};
```

##11. 
```cpp
double ted;
double * p = &ted;
cout << "*p = " << *p << endl;
```

##12. 
```cpp
float treacle[10];
float * p = treacle;
cout << p[0] << " " << p[9];
```

##13. 
```cpp
int a;
cout << "Enter a positive integer: ";
cin >> a; 
int *arr = new int [a];
delete [] arr;
```

##14. 
```cpp
address
```

##15. 
```cpp
fish * shark = new fish;
cout << shark->kind << endl;
cout << (*shark).weight << endl;
cout << (*shark).length << endl;
delete shark;
```

##16.
break with space;

##17.
```cpp
#include<vector>
#include<array>
#include<string>
int main()
{
	const int num = 10;
	vector<string> vec(num); //()
	array<string, num> arr;
	return 0;
}
```
