//输入两个字符，当作十六进制数，输出与之相等的十进制数
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m,n;
    printf("请输入两个字符（请勿超过0~9、A~F的范围）：\n");
    scanf("%x %x",&m,&n);
    printf("与之对应的十进制数为：%d",16*m+n);
    return 0;
}
