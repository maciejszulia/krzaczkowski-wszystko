#include<stdio.h>

long double potega(int podstawa, int wykladnik)
{
	if (wykladnik == 0)
		return 1;
	if (wykladnik > 0)
	{
		int wynik = 1;
		for (int i = 1; i <= wykladnik; i++)
		{
			wynik = wynik * podstawa;
		}
		return (long double)wynik;
	}
	if (wykladnik < 0)
	{
		long double wynik = 0;
		for (int i = 1; i <= -wykladnik; i++)
		{
			wynik = 1 / ((long double)podstawa * (long double)i);
		}
		return wynik;
	}
}

int main()
{
	int n, m; //n - podstawa; m - wykladnik;
	scanf_s("%i%i", &n, &m);

	if (n == 0)
		return 0;

	printf("%i, %i\n", n, m);
	printf("%LF", potega(n, m));


	return 0;
}