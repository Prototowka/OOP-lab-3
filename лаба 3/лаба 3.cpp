#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdlib>
#include <time.h>
#define N 5

using namespace std;

template <typename T>
T summa(T a[])
{
	int i;
	T sum = 0;
	for (i = 0; i < N; i++)
	{
		cout << "[" << i << "]=" << a[i] << endl;
		sum += a[i];
	}
	cout << "sum=" << sum;
	return 0;
}

int main()
{
	int a[N], i, sum = 0;
	float b[N];
	double c[N];

	srand(time(NULL));
	cout << "Type A" << endl;
	for (i = 0; i < N; i++)
	{
		a[i] = rand() % 100;
	}
	summa(a);
	cout << endl << endl << "Type B" << endl;
	for (i = 0; i < N; i++)
	{
		b[i] = rand() % 100;
	}
	summa(b);
	cout << endl << endl << "Type C" << endl;
	for (i = 0; i < N; i++)
	{
		c[i] = rand() % 100;
	}
	summa(c);
}