//输入一个圆锥体的半径和高，求体积
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int r,h;
    double v;
    printf("请输入圆锥体的底面半径和高:\n");
    scanf("%d %d",&r,&h);
    v=3.1415926535*r*r*h*1/3;
    printf("这个圆锥体的体积是：%lf",v);
    return 0;
}
