	    #include<stdio.h>
	    int main()
	    {
	    int a,b=1;
	   int i;
	    printf("Enter the number to find factorial: ");
	    scanf("%d",&a);
	    if(a>0)
	    {
	    for(i=1;i<=a;i++)
	    {
	    b=b*i;
	    }
	    printf("Factorial of given value  %d is %d ",a,b);
	    }
	    return 0;
	    }
