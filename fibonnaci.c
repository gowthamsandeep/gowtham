#include<stdio.h>
#include<conio.h>
void main()
{
int a,c,i,b,f,n,sum;
printf("\n number");
scanf("%d",&n);
a=0;
b=1;
for(i=3;i<=n;i++)
{
f=a+b;
a=b;
b=c;
printf("\n %d",f);
}
}
