#include <stdio.h>
#include <math.h>
int main()
{
	short int wybor;
	printf("jaka figura wariacie: \n");
	printf("1. kwadrat \n");
	printf("2. prostokat \n");
	printf("3. trojkat \n");

	scanf_s("%hi", &wybor);
	double pole;
	double a, b;
	switch (wybor)
	{
	case 1:
		printf("podaj dlugosc boku wariacie: ");
		scanf_s("%lf", &a);
		pole = pow(a, 2);
		printf("twoje pole wariacie: %.2lf", pole);
		break;

	case 2:
		printf("podaj wymiary wariacie: ");
		scanf_s("%lf%lf", &a, &b);
		pole = a * b;
		printf("twoje pole wariacie: %.2lf", pole);
		break;

	case 3:
		printf("podaj podstawe i wysokosc wariacie: ");
		scanf_s("%lf%lf", &a, &b);
		pole = a / 2 * b;
		printf("twoje pole wariacie: %.2lf", pole);
		break;

	default:
		break;
	}

	return 0;
}