#include<stdio.h>
#include<string.h>
void main()
{
char a[100];
int length;
clrscr();
printf("enter the character\n");
gets(a);
length=strlen(a);
printf("\nnumber of the characters is=%d",length);
getch();
}
