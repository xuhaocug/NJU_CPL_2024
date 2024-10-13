#include <stdio.h>

int main()
{
    int input, hundred, ten, one;
    scanf("%d",&input);
    hundred = input / 100;
    ten = (input - (hundred*100)) / 10;
    one = input % 10;
    printf("%d", one * 100 + ten * 10 + hundred);
}