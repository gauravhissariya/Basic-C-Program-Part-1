# include<stdio.h>
#include<stdlib.h>
int fac(int);
main()
{
int n,k;
printf("enter a number\n");
scanf("%d",&n);
k=fac(n);
printf("factorial of %d is %d",n,k);
}
int fac(int n)
{
 int i,f=1;
 for(i=1;i<=n;i++)
    f=f*i;
 return (f);
}




