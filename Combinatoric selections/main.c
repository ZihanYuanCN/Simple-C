//failed
#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned long long int K,c;
    unsigned int N,n,r,s=0,i,j;
    scanf("%u %llu",&N,&K);
    for(n=1;n<=N;n++)
    {
        for(r=1;r<=n;r++)
        {
            c=1;
            i=n-r+1;
            j=1;
            while(i<=n)
            {
                c*=i;
                i++;
            }
            while(j<=r)
            {
                c/=j;
                j++;
            }
            if(c>K)
            {
                s++;
            }
        }
    }
    printf("%u",s);
    return 0;
}
