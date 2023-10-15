// < Іваньо Іван >
// Лабораторна робота № 4.1
// Розгалуження, задане плоскою фігурою.
// Варіант 0.6


#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int k, N, i;
	double P;
	cout << "k = "; cin >> k;
	cout << "N = "; cin >> N;
	P = 1;
	k = N;
	i = 0;

	while ( i <= 19)
	{
		P *= (k * 1.0 - N) / (k * 1.0 + N) + 1;
		i++;
	}
	cout << P << endl;

	P = 1;
	k = N;
	i = 0;

	do {
		P *= (k * 1.0 - N) / (k * 1.0 + N) + 1;
		i++;
	} while (i <= 19);

	cout << P << endl;

	P = 1;

	for (i = 0; i <= 19; i++)
	{
		P *= (k * 1.0 - N) / (k * 1.0 + N) + 1;
	}

	cout << P << endl;
	
	P = 1;

	for (i = 19; i >= 19; i--)
	{
		P *= (k * 1.0 - N) / (k * 1.0 + N) + 1;
	}
	cout << P << endl;
	return 0;
}
