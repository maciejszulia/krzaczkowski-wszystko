#include <stdio.h>

unsigned long long int potega(unsigned int podstawa, unsigned int wykladnik)
{
	if (wykladnik == 0)
		return 1;
	unsigned long long int wynik = podstawa;
	for (unsigned int i = 1; i < wykladnik; i++)
	{
		wynik = wynik * podstawa;
	}
	return wynik;
}

int main()
{
	unsigned int n, m;
	scanf_s("%u%u", &n, &m);
	if (n == 0)
		return 0;
	printf("%u%u\n", n, m);
	printf("%llu", potega(n, m));
}