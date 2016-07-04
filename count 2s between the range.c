#include<stdio.h>
#include<conio.h>
void main()
{
int a=1,count=0,b,r,s;
printf("range");
scanf("%d",&b);
while(a!=b)
{
if(a==2)
count++;
else if(a>9)
{
r=b%10;
s=b/10;
if(r==2)
count++;
if(s==2)
count++;
}
a++;
}
printf("\n2s having:=%d",count);
getch();
}
