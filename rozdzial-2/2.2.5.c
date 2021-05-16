#include <stdio.h>

double potega(int n)
{
	if (n == 0)
		return 1;

	if (n > 0)
	{
		int wynik = 2;
		for (int i = 1; i < n; i++)
			wynik = wynik * 2;
		return wynik;
	}

	if (n < 0)
	{
		double wynik = 0;
		for (int i = 1; i < -n; i++)
		{
			wynik = 1 / (2 * (double)i); //jaaaaaaaapierdole
		}
		return wynik;
	}
}

int main()
{
	int n;
	scanf_s("%i", &n);
	double output = potega(n);
	printf("%lf", output);
	return 0;
}