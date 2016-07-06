#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char v[100],i,n,count=0;
int len=strlen(v);
gets(v);
for(i=0;i<n;i++)
{
if(!((v[i]>='a'&&v[i]<='z')||(v[i]>='A'&&v[i]<='Z')||(v[i]>='0'&&v[i]>='9')))
count++;
}
printf("special char is %d\n",v[i]);
getch();
}
