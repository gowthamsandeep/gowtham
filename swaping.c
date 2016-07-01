#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,temp;
scanf("%d%d",&a,&b);
printf("enter the value of a %d",a);
printf("enter the value of b %d",b);
//scanf("%d""%d",&a,&b);
temp=a;
a=b;
b=temp;
printf("after swaping\na=%d\nb=%d\n",a,b);
getch();
}

