#include <stdio.h>

int main()
{
    int year, month, day;
    int a, y, m;
    int JDN;
    scanf("%d%d%d", &year, &month, &day);
    a = (14-month)/12;
    y = year+4800-a;
    m = month+12*a-3;
    JDN = day+(153*m+2)/5+365*y+y/4-y/100+y/400-32045;
    printf("%d", JDN);
}