#include<stdio.h>
#include<conio.h>
void main()
{
int a[500],i,b[100]={0},k;
clrscr();
printf("Enter the number");
scanf("%d",&k);
for(i=0;i<k;i++)
{

scanf("%d",&a[i]);
b[a[i]]++;
}
{
printf("\n%d",b[i]);
}
for(i=0;i<100;i++)
{
if(b[i]>1)
{
printf("\n%d",i);
}
}
getch();
}
