#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,d,e;
    for(a=2;a<=9;a++)
    {
        for(b=1;b<=9;b++)
        {
            for(c=1;c<=9;c++)
            {
                for(d=1;d<=9;d++)
                {
                    for(e=1;e<=9;e++)
                    {
                        if(a*(b*10+3+c)*a*(b*10+3+c)==8009+d*100+e*10)
                        {
                            printf("[%d*(%d3+%d)]*[%d*(%d3+%d)]=8%d%d9\n",a,b,c,a,b,c,d,e);
                        }
                    }
                }
            }
        }
    }
    return 0;
}
