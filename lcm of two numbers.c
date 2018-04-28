#include <stdio.h>
#include <stdlib.h>
main()
{
int a,b,L;
printf("enter two numbers\n");
scanf("%d%d",&a,&b);
for(L=1;L<=a*b;L++)
{
    if(L%a==0&&L%b==0)
{
    break;
}
}
printf("lcm of a and b is %d",L);
}
