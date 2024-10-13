#include <stdio.h>

int main()
{
    int n, fifty, twenty, ten, five, one;
    scanf("%d", &n);
    fifty = n/50;
    twenty = (n -50*fifty)/20;
    ten = (n-50*fifty-20*twenty)/10;
    five = (n-50*fifty-20*twenty-10*ten)/5;
    one = n-50*fifty-20*twenty-10*ten-5*five;
    printf("%d\n%d\n%d\n%d\n%d\n", fifty, twenty, ten, five, one);
}