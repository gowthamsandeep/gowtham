#include<stdio.h>
void main()
{
int f,s,*a,*b,sum;
printf("enter the two numbers to add\n");
scanf("%d%d",&f,&s);
a=&f;
b=&s;
sum=*a+*b;
printf("added value is=%d\n",sum);
getch();
}
