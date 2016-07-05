#include<stdio.h>
#include<conio.h>
void main()
{
int h1,m1,h2,m2,a,b,c,e,d;
clrscr();
printf("\n enter first time:");
scanf("\n%d%d",&h1,&m1);
a=h1*60;
d=m1+a;
printf("\n enter second time:");
scanf("\n%d%d",&h2,&m2);
b=h2*60;
e=m2+b;
c=e-d;
printf("\n mins between two times given:%d",c);
getch();
}
