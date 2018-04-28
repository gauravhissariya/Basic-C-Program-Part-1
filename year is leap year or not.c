#include <stdio.h>
#include <stdlib.h>
main()
{
int y;
printf("enter the year");
scanf("%d",&y);
if(y%400==0)
{
    printf("leap year");

}
if(y%400!=0&&y%100==0)
{
    printf("non leap year");

}
if(y%400!=0&&y%100!=0&&y%4==0)
{
    printf("leap year");
}
if(y%400!=0&&y%100!=0&&y%4!=0)
{
    printf("non leap year");
}
}
