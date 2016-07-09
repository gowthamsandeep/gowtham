#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int n,r;
scanf("%d",&n);
printf("if by 1 step");
printf("climb in %d stepd",n);

if(n>0)
{
n=n/2;
printf("if by 2 steps %d",n);
}
if(n>0)
{
n=(n+(n/2));
printf(" if may be 1 or 2 steps or 2 or 1 %d",n);
}
r=n;
r=ceil(n);
getch();
}
