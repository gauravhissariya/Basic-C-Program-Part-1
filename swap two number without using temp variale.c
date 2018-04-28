#include <stdio.h>
#include <stdlib.h>
main()
{
int a,b;
printf("enter a and b");
scanf("%d%d",&a,&b);
a=a+b;
b=a-b;
a=a-b;
printf("a is %d\nb is %d",a,b);
}
