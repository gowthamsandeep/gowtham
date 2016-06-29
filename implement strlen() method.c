#include <stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char a[1000],m;
    printf("\nEnter the string=: ");
    scanf("%s",a);
    for(m=0; a[m]!='\0'; ++m);
    printf("\n\tLength of the given string=: %d",m);
    return 0;
}
