#include<stdio.h>
#include<conio.h>
int main()
{
char a;
clrscr();
printf("I,V,X,L,C,D,M,\0");
printf("\nchoose any one roman number");
scanf("%c",&a);
printf("\nroman :%c",a);
switch(a)
{
case 'I':
printf("\nI=1");
break;
case 'V':
printf("\nV=5");
break;
case 'X':
printf("\nX=10");
break;
case 'L':
printf("\nL=50");
break;
case 'C':
printf("\nC=100");
break;
case 'D':
printf("\nD=500");
break;
case 'M':
printf("\nM=1000");
break;
case '\0':
printf("\n0");
break;
}
getch();
return 0;
}
