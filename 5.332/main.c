//�˿�����
#include <stdio.h>
#include <stdlib.h>

int main()
{
    double n=0.011,people=50;
    int year=1998;
    while(people<100)
    {
        people*=(1+n);
        year++;
    }
    printf("����%d�꣬�����˿�ͻ��100�ڴﵽ%.2f��",year,people);
    return 0;
}