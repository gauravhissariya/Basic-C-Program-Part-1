#include <stdio.h>
#include <stdlib.h>
main()
{
int y;
float x;
printf("enter any number");
scanf("%f",&x);
y=sizeof(x);
printf("space consumed by float is %d",y);
}
