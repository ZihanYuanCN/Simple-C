//���������ַ�������ʮ���������������֮��ȵ�ʮ������
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m,n;
    printf("�����������ַ������𳬹�0~9��A~F�ķ�Χ����\n");
    scanf("%x %x",&m,&n);
    printf("��֮��Ӧ��ʮ������Ϊ��%d",16*m+n);
    return 0;
}