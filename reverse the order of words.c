#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char a[1000],b;
int i=0,k=0;
scanf("%s",a);
k=strlen(a)-1;
while(k>i)
{
b=a[i];
a[i]=a[k];
a[k]=b;
i++;
k--;
}
printf("%s",a);
getch();
}
