#include <stdio.h>
#include <math.h>

int main()
{

	double a1, b1;
	short int op; //id operacji

	scanf_s("%lf%lf", &a1, &b1);

	printf("twoje liczby to: %lf, %lf\n", a1, b1);

	printf("1.dodawanie\n2.odejmowanie\n3.mnozenie\n4.dzielnie\n");

	printf("co chcesz zrobic: ");
	scanf_s("%hi", &op);

	switch (op)
	{
	case 1:
		printf("%lf", (a1 + b1));
		break;

	case 2:
		printf("%lf", (a1 - b1));
		break;

	case 3:
		printf("%lf", (a1 * b1));
		break;

	case 4:
		printf("%lf", (a1 / b1));
		break;

	default:
		printf("zla instrukcja");
		break;
	}

	return 0;
}