#include <stdio.h>
#include <math.h>

int main()
{
    double pi_1, pi_2;
    pi_1 = 16*atan(1.0/5) - 4*atan(1.0/239);
    pi_2 = log(pow(640320,3)+744)/sqrt(163);

    printf("%.15f\n%.15f\n",pi_1, pi_2);
}