#include <stdio.h>
#include <stdlib.h>
main()
{
int a,b,h;
printf("enter two number\n");
scanf("%d%d",&a,&b);

for(h=a;h>=1;h--)
{if(a%h==0&&b%h==0)
{
    break;
}
}
printf("hcf is %d",h);
}
