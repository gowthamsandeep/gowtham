#include<stdio.h>
#include<conio.h>
void main()
{
int a[50],b,c,d;
clrscr();
printf("enter the numbers:\n");
scanf("%d%d%d%d",&a[1],&a[2],&a[3],&a[4]);
b=a[1]*a[2]*a[3];
c=a[4];
d=b*c;
printf("%d",d);
getch();
}
