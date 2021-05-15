#include <stdio.h>

unsigned int potega(unsigned int n)
{
	if (n == 0)
		return 1;
	int wynik = 2;
	for (int i = 1; i < n; i++)
		wynik = wynik * 2;
	return wynik;
}

int main()
{
	unsigned int n;
	scanf_s("%u", &n);
	printf("%u", potega(n));
	return 0;
}