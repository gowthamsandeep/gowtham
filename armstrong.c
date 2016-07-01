#include<stdio.h>
void main()
{
int n,a,b=0,t;
printf("enter the num");
scanf("%d",&n);
t=n;
while(n>0)
{
a=n%10;
b=b+a*a*a;
n=n/10;
}
printf("%d %d",b,t);
if(b==t)
{
printf("it is armstrong number");
}
else
{
printf("it is not an armstrong number") ;
}
getch();
}
