#include<stdio.h>
#include<stdlib.h>
int square(int);
main()
{
 int a,b;
 printf("enter a number\n");
 scanf("%d",&a);
 b=square(a);
 printf("%d",b);
}
 int square(int a)
{
    int c;
    c=a*a;
    return c;
}





