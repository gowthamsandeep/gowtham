#include <stdio.h>
#include<string.h>
void main()
 {
    char a[1000];
    int len,k;
    int b[25]={0};
    scanf("%s",a);
    len=strlen(a);
    for(k=len-1;k>0;k--)
    {
	if(a[k]!=a[k-1])
	{
		int t=a[k]%97;
		if(b[t]==0)
		{
	printf("%c",a[k]);
	b[t]=1;
	}
	}
    }
	getch();
}
