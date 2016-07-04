#include<iostream.h>

int main()
{
int n,f=0,s=2,next,b;
cout<<"value\n";
cout<<"FIRST"<<n<<"fibonacci""\n";
for(b=0;b<n;b++)
{
if(b<=1)
next=b;
else
{
next=f+s;
f=s;
s=next;
}
cout<<next<<"\n"
next++;
}
return 0;
}}
