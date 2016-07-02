#include<stdio.h>
#include<conio.h>
void main()
{
 int k,i,j,c=0;
 int a[20];
 clrscr();
 k=4;
 for(i=0;i<k;i++)
 {
  scanf("%d",&a[i]);
 }
 for(i=0;i<k;i++)
 {
  c=1;
  for(j=0;j<k;j++)
  {
   if(a[i]==a[j]&&(i!=j))
   {
    c++;
   }
  }
   if(c==1)
  {
   printf("\n%d ",a[i]);
  }
 }
 getch();
}
