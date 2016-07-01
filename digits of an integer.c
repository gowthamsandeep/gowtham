#include<stdio.h>
#include<conio.h>
void main()
{
int a ,b,c=0;
clrscr();
printf("enter the integer");
scanf("%d",&a);
while(a>9)
{
b=a%10;
c=c+b;
a=a/10;
}

c=c+a;

printf("total value is=%d",c);
getch();
}
