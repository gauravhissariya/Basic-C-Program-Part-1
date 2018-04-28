#include <stdio.h>
#include <stdlib.h>
 main()
 {


 while(1)
 {
     int choice,i,n,a,b;
     printf("\n1.Addition\n2.Odd-Even\n3.print N natural number\n");
     printf("enter your choice");
     scanf("%d",&choice);
     switch(choice)
     {
     case 1:
         printf("enter two number\n");
         scanf("%d%d",&a,&b);
         printf("sum of a and b is %d",a+b);
         break;
     case 2:
         printf("enter a number\n");
         scanf("%d",&a);

        if(a%2==0)
        {
            printf("even");
        }
        else
        {
            printf("odd");
        }
        break;
        case 3:
            printf("enter a number\n");
            scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
            printf("%d\t",i);
        }
     break;
        default:
            printf("invalid choice");
 }
 }
 }
