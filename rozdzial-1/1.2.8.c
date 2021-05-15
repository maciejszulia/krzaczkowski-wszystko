#include <stdio.h>
int main()
{
	int a, b, c;
	scanf_s("%i%i%i", &a, &b, &c);
	printf("%F", (float)(a + b + c) / 3);
}