#include<stdio.h>
int main()
{
char s[20];
int i;
printf("Enter any string->");
scanf("%s",s);
printf("The string is->%s",s);
for(i=0;i<=strlen(s);i++)
{
if(str[i]>=97&&s[i]<=122)
str[i]=str[i]-32;
}
printf("\nThe string in camelcase is->%s",s);
return 0;
}
