#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if (a>=b && a>=c)  printf("%d",a);
    if (b>=a && b>=c)  printf("%d",b);
    else printf("%d",c);
	system("pause");
	return 0;
}
