#include <stdio.h>
#include <math.h>

int main()
{
    int p,q;
    double x1;
    scanf("%d%d", &p, &q);
    double root1, root2;
    root1 = q/(-2.0)+sqrt(pow(q/2.0,2.0)+pow(p/3.0,3.0));
    root2 = q/(-2.0)-sqrt(pow(q/2.0,2.0)+pow(p/3.0,3.0));
    if(root1>=0 && root2>=0)
    {
        x1 = pow(root1, 1.0/3) + pow(root2, 1.0/3);
    }
    else if(root1>=0 && root2<0)
    {
        x1 = pow(root1, 1.0/3) - pow(-root2, 1.0/3);
    }
    else if(root1<0 && root2>=0)
    {
        x1 = -pow(-root1, 1.0/3) + pow(root2, 1.0/3);
    }
    else
    {
        x1 = -pow(-root1, 1.0/3) - pow(-root2, 1.0/3);
    }
    // 在数学上，负数的奇次根号是有实数解的。例如，-8的3次根号是-2。但在C语言中，直接使用 pow 函数计算负数的非整数次幂时，可能会得到意想不到的结果，甚至报错。
    printf("%.3f", x1);
}