#include <stdio.h>
#include<string.h>
void main()
{
  char a[100],k,i,j;
  scanf("%s",a);
  n=strlen(a);
  for(i=0;i<k;i++)
  {
      if(a[i]=='.')
      {
	  for(j=i;j<=k;j++,i++)
	  {
	  printf("%c",a[i+1]);
	  }
      }
  }

    getch();
}
