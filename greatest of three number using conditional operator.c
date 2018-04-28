#include <stdio.h>
#include <stdlib.h>
main()
{
    int a,b,c;
    printf("enter three numbers\n");
    scanf("%d%d%d",&a,&b,&c);
    printf("%d",a>=b?a>=c?a:c:b>=c?b:c);

    }

