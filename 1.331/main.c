//从键盘上输入一个整数，输出该数所对应的八进制数和十六进制数。
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("请输入一个整数：\n");
    scanf("%d",&n);
    printf("这个整数的八进制数是:%o\n这个数的十六进制数是:%x\n",n,n);
    return 0;
}
