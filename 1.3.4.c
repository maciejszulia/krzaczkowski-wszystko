#include <stdio.h>
#include <math.h>
int main()
{
	int a, b;
	scanf_s("%i%i", &a, &b);
	if (abs(a) > abs(b))
		printf("%i", a);
	else
		printf("%i", b);
	return 0;
}