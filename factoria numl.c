#include<stdio.h>
#include<conio.h>
void main()
{
long b=1;
int a,i;
clrscr();
printf("Enter the factorial of number:\n");
scanf("%d",&a);
for(i=1;i<=a;i++)
b=b*i;
printf("The factorial of a given number is:\n%ld",b);
getch();
}
