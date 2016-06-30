#include<stdio.h>
int main()
{
int num, rem, flag=0;
printf("\nEnter a Number: ");
scanf("%d",&num);
while(num>2)
{
rem=num%2;
if(rem==1)
{
flag=1;
break;
}
else
num=num/2;
}
if(flag==1)
printf("\nThis number is not Power of two.");
else
printf("\nThis number is Power of two");
}
