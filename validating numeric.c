#include<stdio.h>
#include<string.h>
int main()
{
int num;
int string;
scanf("%d",&num);

string = "";
num = atoi( string );
if (num >=0 && num<=9)
{
   printf("it is a Number!\n");
   }
else
  {
   printf("Not a number: %s\n");
   }
   return 0;
   }
