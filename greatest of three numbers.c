#include <stdio.h>
#include <stdlib.h>
main()
{
    int a,b,c;
    printf("enter three numbers");
    scanf("%d%d%d",&a,&b,&c);
    if(a>=b&&a>=c)
        {printf("a is greatest and it is %d\n",a);
        }
        if(b>=c&&b>=a)
        {
            printf("b is greatest and it is %d\n",b);
        }
        if(c>=a&&c>=b)
        {
            printf("c is greatest and it is %d\n",c);
        }
}
