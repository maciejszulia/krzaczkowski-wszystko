#include <stdio.h>
int main()
{
	int n;
	scanf_s("%i", &n);
	if (n > 0)
		printf("%i", n);
	else
		printf("%i", -1 * n);
	return 0;
} 