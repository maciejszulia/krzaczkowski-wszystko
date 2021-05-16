#include <stdio.h>
#include <math.h>
int main()
{
	printf("1. obliczanie pola z podstawy i wysokosci\n2. obliczanie pola z 3 bokow: \n");
	short int wybor;
	scanf_s("%hi", &wybor);
	double pole = 1;

	if (wybor == 1)
	{
		double a, h;
		printf("podaj a i h: ");
		scanf_s("%lf %lf", &a, &h);
		pole = 0.5 * a * h;

	}
	else
	{
		double bok1, bok2, bok3;

		printf("podaj dlugosci 3 bokow: ");
		scanf_s("%lf%lf%lf", &bok1, &bok2, &bok3);
		printf("bok1 = %lf bok2 = %lf bok3 = %lf", bok1, bok2, bok3);

		double s = (bok1 + bok2 + bok3) / 2;
		printf("polowa ob = %lf", s);

		pole = sqrt(s * (s - bok1) * (s - bok2) * (s - bok3));

	}
	printf("pole trojkata: %lf", pole); //czemu to nie dziala???? kurwaaaa!!!!

	return 0;
}
