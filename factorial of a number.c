#include <stdio.h>
#include <stdlib.h>
main()
{
int i,n,fac=1;
printf("enter a number");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
fac=fac*i;
}
printf("%d",fac);

}
