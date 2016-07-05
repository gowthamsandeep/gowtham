#include<stdio.h>
#include<conio.h>
void main()
{
int a[10];
int b,i,j;
clrscr();
printf("value\n");
scanf("%d",&a);
for(i=0;i<a[10];i++)
{
if(i==a[3]||i==a[7]||i==a[9])
printf("a %d",a[i]);
{
a[i]='.';
i++;
printf(".");
}
printf("%d",a);
}
getch();
}
