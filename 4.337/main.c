//按工资高低纳税
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int s,t;
    double p,shide,shui;
    printf("请输入工资数：\n");
    scanf("%d",&s);
    t=s/1000;
    switch(t)
    {
        case 0:p=0;   break;
        case 1:p=0.05;  break;
        case 2:p=0.08;  break;
        case 3:
        case 4:p=0.1;   break;
        default:p=0.15;
    }
    shui=s*p;
    shide=s-shui;
    printf("纳税款为%f元，实得工资数为%f元。\n",shui,shide);
    return 0;
}
