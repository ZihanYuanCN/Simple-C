#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a,b,c,s;
    for(a=1;a<=9;a++)
    {
		for(b=0;b<=9;b++)
        {
			for(c=0;c<=9;c++)
            {
				if(a*122+b*212+c*221==2012)
                {
					s=a*100+b*10+c;
                    printf("%d\n",s);
                }
            }
        }
    }
	
	system("pause");
	return 0;
}
