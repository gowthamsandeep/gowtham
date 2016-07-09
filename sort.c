#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],i,j,num,c=0;
scanf("%d",&num);
for(i=0;i<num;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<num;i++)
{
for(j=i+1;j<num;j++)
{
if(a[i]>a[j])
{
c++;
}  }}
if(c==0){
printf("The array is  sorted");
      }
else
{
printf("the array is not sorted");
}
getch();
}
