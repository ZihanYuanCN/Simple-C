//�����ʸߵ���˰
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int s,t;
    double p,shide,shui;
    printf("�����빤������\n");
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
    printf("��˰��Ϊ%fԪ��ʵ�ù�����Ϊ%fԪ��\n",shui,shide);
    return 0;
}