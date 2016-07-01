#include<stdio.h>
void main()
{
int a,b,max;
printf("enter the two numbers for lcm\n");
scanf("%d%d",&a,&b);
max=(a>b)?a:b;
//printf("%d",max);
while(1)
{
if(max%a==0&&max%b==0)
break;
{
printf("lcm of %d and %d=%d\n",a,b,max);
break;
}
getch();
}
}
