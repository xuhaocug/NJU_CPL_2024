#include <stdio.h>
#include <math.h>

int main()
{
    double pi_1, pi_2;
    pi_1 = log(pow(5280,3)*pow((236674+30303*sqrt(61)),3)+744)/sqrt(427);
    pi_2 = 24*atan(1.0/8) + 8*atan(1.0/57) + 4*atan(1.0/239);
    printf("%.15f\n%.15f", pi_1, pi_2);
}