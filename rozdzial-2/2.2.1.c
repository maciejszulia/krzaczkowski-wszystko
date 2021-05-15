#include <stdio.h>

int bezwzg(int n)
{
	if (n < 0)
		return -n;
	else
		return n;
}

int main()
{
	int n;
	scanf_s("%i", &n);
	printf("wartosc bezwzgledna z n = %i", bezwzg(n));

	return 0;
}