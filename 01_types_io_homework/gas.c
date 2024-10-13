#include <stdio.h>
#include <math.h>

int main()
{
    const double R=8.314;
    double P, L, T;
    scanf("%lf%lf%lf",&P, &L, &T);
    printf("%.4e",(P*pow(L,3))/(R*T));
}