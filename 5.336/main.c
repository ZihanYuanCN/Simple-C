//����̩�ռ�������sin(x)��ֵ
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int i=1;
    double x,sin,n;
    printf("������sin(x)��x��ֵ��\n");
    scanf("%lf",&x);
    n=x;
    do
    {
        sin+=n;
        n=-n*x*x/(i+1)/(i+2);
        i+=2;
    }while(fabs(n)>=1E-5);
    printf("sin(x)��ֵΪ��%lf\n",sin);
    return 0;
}