#include <stdio.h>
 
int main()
{
    int i, n, sum=0;
 
    
    printf("Enter any number to find sum of first and last digit: ");
    scanf("%d", &n);
     
    
    if(n>10) 
    {
        /* Adds last digit to sum */
        sum += n % 10; 
    }
 
    
    while(n>=10)
    {
        n = n / 10;
    }
 
    
    sum += n; 
 
    printf("Sum of first and last digit = %d", sum);
 
    return 0;
}
