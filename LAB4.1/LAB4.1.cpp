// < ������ ���� >
// ����������� ������ � 4.1
// �����.
// ������ 0.6


#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int k, N, i;
	double P;
	cout << "N = "; cin >> N;
	P = 1;
	k = N;
	i = 0;

	while ( k <= 19)
	{
		P *= (k * 1.0 - N) / (k * 1.0 + N) + 1;
		k++;
	}
	cout << P << endl;

	P = 1;
	k = N;
	i = 0;

	do {
		P *= (k * 1.0 - N) / (k * 1.0 + N) + 1;
		k++;
	} while (k <= 19);

	cout << P << endl;

	P = 1;

	for (k = N; k <= 19; k++)
	{
		P *= (k * 1.0 - N) / (k * 1.0 + N) + 1;
	}

	cout << P << endl;
	
	P = 1;

	for (k = 19; k >= N; k--)
	{
		P *= (k * 1.0 - N) / (k * 1.0 + N) + 1;
	}
	cout << P << endl;
	return 0;
}
