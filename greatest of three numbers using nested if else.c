#include <stdio.h>
#include <stdlib.h>
main()
{
    int a,b,c;
    printf("enter three numbers\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a>=b)
    {
        if(a>=c)

     printf("a=%d\n",a);

        else

            printf("c=%d\n",c);

    }
        else
        {
            if(b>=c)
              printf("b=%d\n",b);
              else
                printf("c=%d",c);
            }


    }

