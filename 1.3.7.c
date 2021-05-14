#include <stdio.h>
#include <math.h>
int main()
{
	double a, b, c;
	printf("wpisz wspolczynniki a,b,c:\n");
	scanf_s("%lf%lf%lf", &a, &b, &c);
	printf("wspolczynniki: a=%.2lf b=%.2lf c=%.2lf\n", a, b, c);
	printf("rownanie wyglada tak:\n");
	printf("%.2lfx^2 + %.2lfx + %.2lf = 0\n", a, b, c);

	double delta, x1, x2, x;
	delta = pow(b, 2) - 4 * a * c;

	if (delta > 0)
	{
		x1 = (-b - sqrt(delta)) / (2 * a);
		x2 = (-b + sqrt(delta)) / (2 * a);
		printf("rozwiazania: x1 = %.2lf x2=%.2lf", x1, x2);
	}
	if (delta == 0)
	{
		x = (-b) / (2 * a);
		printf("rozwiazania: x = %.2lf", x);
	}
	if (delta < 0)
	{
		printf("brak rozwiazan");
	}

	return 0;
}