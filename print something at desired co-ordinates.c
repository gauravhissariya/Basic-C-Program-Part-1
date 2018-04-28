#include <stdio.h>
#include <stdlib.h>
#include<windows.h>
main()
{
COORD c;
c.X=40;
c.Y=12;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
printf("gaurav hissariya");
}
