#include <stdio.h>

void zamiana(int* a, int* b)
{
	if (a > b)
	{
		int temp;
		temp = *a;
		*a = *b;
		*b = temp;
	}

}

int main()
{
	int a = 2;
	int b = 1;
	zamiana(&a, &b);
	printf("po zamianie a = %i, b = %i", a, b);



	return 0;
}