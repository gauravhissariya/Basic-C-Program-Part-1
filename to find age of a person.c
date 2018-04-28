#include <stdio.h>
#include <stdlib.h>
main()
{
int d1,m1,y1,d2,m2,y2;
printf("enter the current year and birth year");
scanf("%d%d%d%d%d%d",&d1,&m1,&y1,&d2,&m2,&y2);
if(m1>m2)
{
    m2=m2+12;
    y2=y2-1;
}
if(d1>d2)
{
    d2=d2+30;
    m2=m2-1;

}

    m2=m2-m1;
    d2=d2-d1;
    y2=y2-y1;


printf("%d\t%d\t%d\t",d2,m2,y2);

}
