#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,i;
printf("enter the interval 1=",a);
printf("\nenter the interval 2=",b);
scanf("%d%d",&a,&b);
for(i=a;i<=b;i++)
{
if(i%2!=0)
printf("%d",i);
}
}
