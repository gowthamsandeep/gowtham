#include<stdio.h>
#include<conio.h>
void main()
{
int i,count;
char n[100];
printf("enter the words\n");
gets(n);
for(i=0;n[i]!='\0';i++)
{
if(n[i]!=' ')
{}
else
{
count++;
}
}
count++;
printf("num of words%d ",count);
getch();
}
