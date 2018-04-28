#include <stdio.h>
#include <stdlib.h>
main()
{
int i,sum=0,n;
printf("enter a number");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
sum=sum+i;      // point to remember
}
printf("sum=%d",sum);
}
