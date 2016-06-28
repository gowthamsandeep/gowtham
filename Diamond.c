#include <stdio.h>
#include<conio.h>

void  main()
{
  int n, a, b;
  int space = 1;
  printf("Enter number of rows\n");
  scanf("%d", &n);
  space = n - 1;

  for (b = 1; b <= n; b++)
  {
    for (a = 1; a <= space; a++)
      printf(" ");
    space--;

    for (a = 1; a <= 2*b-1; a++)
      printf("*");

    printf("\n");
  }

  space = 1;

  for (b = 1; b <= n - 1; b++)
  {
    for (a = 1; a <= space; a++)
      printf(" ");

    space++;

    for (a = 1 ; a <= 2*(n-b)-1; a++)

      printf("*");

    printf("\n");
   // printf("Diamond pattern for given num\n\t");

  }
 getch();
  return 0;
}
