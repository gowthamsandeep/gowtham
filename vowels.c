#include<stdio.h>
#include<string.h>
#include<conio.h>
void main()
{
char a[50],b[20];
int i,j=0;
scanf("%s",&a);
printf("Reversed string is:%s",strrev(a));
for(i=0;i<strlen(a);i++)
{
if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U')
a[i]=' ';
else
b[j++]=a[i];
}
a[i]='\0';
printf("The word without vowles is %s",a);
getch();
}
