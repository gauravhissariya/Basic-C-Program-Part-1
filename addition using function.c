
#include <stdio.h>
#include <stdlib.h>
//take something return something
main()
{
    int x,y,z;
    printf("enter two numbers\n");
    scanf("%d%d",&x,&y);
    z=add(x,y);
    printf("%d",z);
}
int add(int a,int b)
{
    int c;
    c=a+b;
    return (c);
}


