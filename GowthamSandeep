#include<stdio.h>
#include<conio.h>
#define MAX 20
void main()
{
 int a[MAX];
 int n,i,j=0,min,smin;
 clrscr();
 printf("Enter number of elements\n");
 scanf("%d",&n);
 printf("Enter the elements:\n");
 for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
 }
 min=a[0];
 for(i=1;i<n;i++)
 {
  if(min>a[i])
  {
   min=a[i];
   j=i;
  }
 }
 smin=a[n-j-1];
 for(i=1;i<n;i++)
 {
  if(smin>a[i] && j!=i)
  smin=a[i];
 }
 printf("Second smallest element: %d", smin);
 getch();
}
