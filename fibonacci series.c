#include <stdio.h>
#include <stdlib.h>
main()
{
int i,n,c,a=-1,b=1;
printf("enter a number\n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
    c=a+b;
    printf("%d\n",c);
   a=b;
   b=c;
}
}
