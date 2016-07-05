#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,month,year;
printf("enter the date btwn 1 to 30\n");
printf("enter in format of = date,month,year\n");
scanf("%d.%d.%d",&a,&month,&year);
{
b=a%7;
}
switch(b)
{
case 0:
printf("sunday\n");
break;
case 1:
printf("monday\n");
break;
case 2:
printf("tuesday\n");
break;
case 3:
printf("wednesday\n");
break;
case 4:
printf("thursday\n");
break;
case 5:
printf("friday\n");
break;
case 6:
printf("saturday\n");
break;
}
getch();
}
