#include <stdio.h>
int main()
{
	int a, b, c;
	scanf_s("%i %i %i", &a, &b, &c);
	if (a > b && a > c)
		printf("%i", a);
	if (b > a && b > c)
		printf("%i", b);
	if (c > a && c > b)
		printf("%i", c);
	if (c == b && b == a)
		printf("wszystkie sa rowne"); //zrobic wszystkie wybory
	return 0;
}