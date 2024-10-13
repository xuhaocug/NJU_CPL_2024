#include <stdio.h>
#include <math.h>

int main()
{
    const double G = 6.674e-11;
    const double M = 77.15;
    double m, R;

    scanf("%lf %lf", &m, &R);
    printf("%.3e", G*M*m/(R*R));
}