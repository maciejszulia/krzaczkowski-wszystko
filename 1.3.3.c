#include <stdio.h>
int main()
{
	int a, b, c;
	scanf_s("%i%i%i", &a, &b, &c);
	if (a >= b && a >= c)
		printf("%i\n", a);
	if (b >= a && b >= c)
		printf("%i\n", b);
	if (c >= a && c >= b)
		printf("%i\n", c);

	return 0;
}