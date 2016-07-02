#include<stdio.h>
#include<conio.h>
int main()
{
int num,reverse=0,a;
printf("number=");
scanf("%d",&num);
a=num;
while(a!=0)
{
reverse=reverse*10;
reverse=reverse+a%10;
a=a/10;
}
if(num==reverse)
printf("%d is a palindrome number\n",num);
else
printf("%d is not palindrome number\n",num);
return 0;
}
