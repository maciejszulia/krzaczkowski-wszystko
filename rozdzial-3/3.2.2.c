#include <stdio.h>

int* funkcja(int* a, int* b)
{
	if (*a > *b)
		return b;
	else
		return a;
}

int main()
{
	int a = 1;
	int b = 2;
	printf("mniejsza jest: %i", funkcja(&a, &b));



	return 0;
}