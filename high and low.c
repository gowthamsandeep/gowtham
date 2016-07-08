#include <stdio.h>
int main() 
  {
    int a[10],i,max,min;
    for(i=0;i<=10;i++)
    	scanf("%d",&a[i]);
    max=a[0];min=a[0];
    for(i=0;i<=10;i++)
		if(a[i]>max)
			max=a[i];
    printf("highest:%d\n",max);
    for(i=0;i<10;i++)
		if(a[i]<min)
			min=a[i];
    printf("Lowest:%d",min);
    return 0;
    }
