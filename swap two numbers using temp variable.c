#include <stdio.h>
#include <stdlib.h>
main()
{
int a,b,temp;
printf("enter a and b");
scanf("%d%d",&a,&b);
temp=a;
a=b;
b=temp;
printf("a is %d\nb is %d",a,b);
}
