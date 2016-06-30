#include<stdio.h>
#include<conio.h>
void main()
{
int a,i;
printf("Enter the number to check it is prime or not ");
scanf("%d",&a);
if(a>0)
{
if(a==1)
printf("\n %d is a prime number",a);
else
{
for(i=2;i<=a-1;++i)
{
if(a%i==0)
printf("it is not a prime number ");
else
printf("\n %d is a prime number",a);
}
}
}
else
printf(" Invaild number");
getch();
}
