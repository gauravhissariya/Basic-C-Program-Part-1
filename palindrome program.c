#include <stdio.h>
#include <stdlib.h>
main()
{
    int p,q,r=0,m;
    printf("enter the the number");
    scanf("%d",&p);
    m=p;
    while(p!=0)
    {
        q=p%10;
        r=r*10+q;
        p=p/10;
    }
    if(r==m)
    {
        printf("palindrome");
    }
    else
    {
        printf("not a palindrome");
    }
}
