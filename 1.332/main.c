//从键盘上输入一个梯形的上底a、下底b和高h，输出梯形的面积s。
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,h,s;
    printf("请依次输入梯形的上底、下底、和高：\n");
    scanf("%d %d %d",&a,&b,&h);
    s=(a+b)*h/2;
    printf("这个梯形的面积为：%d",s);
    return 0;
}
