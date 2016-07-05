#include<stdio.h>
#include<conio.h>
void main()
{
int a,m,n,m1,d1,yr1,m2,d2,yr2;
printf("enter the date \n");
scanf("%d%d%d",&yr1,&m1,&d1);
scanf("%d%d%d",&yr2,&m2,&d2);
m=abs(yr1-yr2);
n=abs(m1-m2);
if(yr1!=yr2 || m1!=m2)
{
a=m*12+n;
}
if(yr1==yr2&&m1==m2)
{
a=m+n;
}
printf("%d",a);
getch();
}
