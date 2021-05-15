#include <stdio.h>
int main()
{
	int a, b;
	scanf_s("%i %i", &a, &b);
	if (a > b)
		printf("%i", a);
	if (a < b)
		printf("%i", b);
	if (a == b)
		printf("sa rowne");
	return 0;
}