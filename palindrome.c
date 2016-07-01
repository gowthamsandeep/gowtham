#include<stdio.h>
#include<conio.h>
int main()
{
int n,reverse=0,p;
printf("number=");
scanf("%d",&n);
p=n;
while(p!=0)
{
reverse=reverse*10;
reverse=reverse+p%10;
p=p/10;
}
if(n==reverse)
printf("%d is a palindrome number\n",n);
else
printf("%d is not palindrome number\n",n);
return 0;
}
