// create a program that converts minutes to days and years

// user add to minutes via the terminal
// output to days and years
#include <stdio.h>

int main()
{
    int minutes = 20;
    double miy = (60 * 24 * 7 * 52);
    double mid = (60 * 24);
    double years = 0.0;
    double days = 0.0;

    printf("How many minutes?: ");
    scanf("%d", &minutes);

    printf("%d", minutes);
    days = minutes / mid;
    years = minutes / miy;

    printf("\n your amount into days: %f ", days);
    printf("\n your amount into years: %f ", years);

    return 0;
}