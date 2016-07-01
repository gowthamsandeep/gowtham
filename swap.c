#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char a[20],temp;
int c,b;
clrscr();
printf("\n enter the string:");
scanf("%s",a);
b=strlen(a);
for(c=0;c<b;++c)
{
temp=a[c];
a[c]=a[c+1];
a[c+1]=temp;
c++;
}
a[b+1]='\0';
printf("\n %s",a);
getch();
}
