#include <stdio.h>
#include <stdlib.h>
main()
{
float a,b,c,d,e;
printf("enter marks of five subject");
scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);
printf("total=%f\npercentage=%f",a+b+c+d+e,(a+b+c+d+e)/5);
}
