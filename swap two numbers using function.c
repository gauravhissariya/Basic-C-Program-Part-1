#include<stdio.h>
#include<stdlib.h>
void swap(int,int);
main()
{
    int a,b;
    printf("enter two numbers\n");
    scanf("%d%d",&a,&b);
    swap(a,b);
}
void swap(int a,int b)
{
    int c;
    c=b;
    b=a;
    a=c;
    printf("%d\n%d",a,b);
}


