#include <stdio.h>
#include <stdlib.h>
main()
{
    int marks;
    printf("enter a number between 0 to 100\n");
    scanf("%d",&marks);
    if(marks>90)
    {
     printf("Grade-A");
    }
    else if(marks>80)
    {
        printf("Grabe-B");
    }
    else if(marks>70)
    {
        printf("Grade-C");
    }
    else
    {
        printf("Grade-D");
    }
}

