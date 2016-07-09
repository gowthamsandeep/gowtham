a#include<stdio.h>
void main()
{
	char i,j;
	scanf("%c %c",&i,&j);
	if(i>j)
		printf("%c is greatest",i);
	else if(j>i)
		printf("%c is greatest",j);
	else
		printf("Both are equal");
}
