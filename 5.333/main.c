//�ҳ�����ǰ��λ�������λ���ĺ͵�ƽ�������䱾������λ��
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,n1,n2,n3,n4;
    for(n=1000;n<=9999;n++)
    {
        n1=n/1000;
        n2=n/100%10;
        n3=n/10%10;
        n4=n%10;
        if((n1*10+n2+n3*10+n4)*(n1*10+n2+n3*10+n4)==n)
        {
            printf("%d ",n);
        }
    }
    return 0;
}