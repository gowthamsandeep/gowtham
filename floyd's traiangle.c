#include<stdio.h>
#include<conio.h>
int main()
{
int a,b,c,f=1;
//clrscr();
printf("number for floyds triangle\n");
scanf("%d",&a);
for(b=1;b<a;b++)
{
for(c=1;c<b;c++)
{
printf("%d",f);
a++;
}
printf("\n");
}
//getch();
return 0;
}
