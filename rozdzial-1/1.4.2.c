#include <stdio.h>
#include <math.h>

int main()
{
	unsigned int n, m;
	printf("podaj liczby n i m: ");
	scanf_s("%i%i", &n, &m);
	for (int i = 0; i < m; i++)
		printf("%i\n", n += n);


	return 0;
}