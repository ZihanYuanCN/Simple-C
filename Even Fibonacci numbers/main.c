#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int T,i,m,n;
    scanf("%u",&T);
    unsigned long long int N,s[T];
    for(i=1;i<=T;i++)
    {
        s[i-1]=0;
        scanf("%llu",&N);
        m=1;
        n=2;
        while(m<=N || n<=N)
        {
            m+=n;
            n+=m;
        }



    }

    return 0;
}
