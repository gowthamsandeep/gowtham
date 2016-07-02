#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
 {
char i[50];
clrscr();
scanf("%s",i);
if((strcmp(i,"sunday")==0)||(strcmp(i,"saturday")==0))
{
printf("\nholiday");
printf("\nfalse");
}
else
{
printf("\nWorking day");
printf("\ntrue");
}
getch();
return 0;
}
