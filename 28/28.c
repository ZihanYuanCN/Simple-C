#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a;
    a=1;
    while (a<=100)
{		
		if (a%3!=0)
        printf("%d\n",a);
        a=a+1;
}        
	system("pause");
	return 0;
}
