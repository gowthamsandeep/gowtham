#include<stdio.h>
void main()
{
int a,i,val=0;
clrscr();
printf("Enter the number to sum up the odd numbers: ");
scanf("%d",&a);
for(i=1;i<=a;i++)
{
if(i%2!=0)
{
val+=i;
}
}
printf("Sum of odd digits in the range = %d",val);
getch();
}
