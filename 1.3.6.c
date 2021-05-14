#include <stdio.h>
#include <math.h>

int main()
{
	double a1, b1, a2, b2, c1, c2;
	double w, wx, wy;
	double x, y;

	printf("podaj wspolczynniki: (a1*x) + (b1*y) = c1: \n");
	printf("podaj a1, b1, c1: ");
	scanf_s("%lf%lf%lf", &a1, &b1, &c1);
	//printf("%lf %lf %lf\n", a1, b1, c1);

	printf("podaj a2, b2, c2: ");
	scanf_s("%lf%lf%lf", &a2, &b2, &c2);
	//printf("%lf %lf %lf", a2, b2, c2);

	printf("twoje rownianie wyglada tak: \n");
	printf("%.2lfx + %.2lfy = %.2lf\n", a1, b1, c1);
	printf("%.2lfx + %.2lfy = %.2lf\n", a2, b2, c2);

	w = (a1 * b2) - (b1 * a2);
	wx = (c1 * b2) - (b1 * c2);
	wy = (a1 * c2) - (c1 * a2);

	printf("wyznaczniki: w:%.2lf wx:%.2lf wy:%.2lf\n", w, wx, wy);

	if (w == 0 && wx == 0 && wy == 0)
	{
		printf("uklad nieoznaczony");
	}
	else if (w == 0 && wx != 0 && wy != 0)
	{
		printf("uklad sprzeczny");
	}
	else if (w != 0)
	{
		x = wx / w;
		y = wy / w;
		printf("rozwiazanie ukl. rownan: \nx = %.2lf y=%.2lf", x, y);

	}


	return 0;
}