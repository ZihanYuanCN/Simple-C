#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ptr,day;
    float rtp=0,rtpd=0.01;
    ptr=1e5*30;
    for(day=1;day<=30;day++)
    {
        rtp+=rtpd;
        rtpd*=2;
    }
    printf("�����İ���˸��˰�����%dԪ\n����°����̸���İ����%.2fԪ",ptr,rtp);
    return 0;
}