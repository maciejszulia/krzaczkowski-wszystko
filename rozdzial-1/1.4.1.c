#include <stdio.h>
#include <math.h>

int main()
{
	unsigned int n, m;
	printf("podaj liczby n i m: ");
	scanf_s("%i%i", &n, &m);
	for (int i = n; i < m; i += n)
		printf("%i\n", i);


	return 0;
}