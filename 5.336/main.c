//利用泰勒级数计算sin(x)的值
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int i=1;
    double x,sin,n;
    printf("请输入sin(x)中x的值：\n");
    scanf("%lf",&x);
    n=x;
    do
    {
        sin+=n;
        n=-n*x*x/(i+1)/(i+2);
        i+=2;
    }while(fabs(n)>=1E-5);
    printf("sin(x)的值为：%lf\n",sin);
    return 0;
}
