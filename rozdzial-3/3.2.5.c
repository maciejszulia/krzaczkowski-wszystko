#include <stdio.h>

int suma(int* a, int* b)
{
	int a1 = a;	//nie wiem co sie tu dzieje
	int b1 = b;
	return a1 + b1;
}

int main()
{
	int a = 2;
	int b = 1;

	printf("suma %i", suma(a, b));


	return 0;
}