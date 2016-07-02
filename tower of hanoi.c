#include<stdio.h>
 
void TOH(int n, char x, char y, char z);
 
int main() {
   int n;
   printf("\nEnter number of plates:");
   scanf("%d", &n);
 
   TOH(n - 1, 'A', 'B', 'C');
   return (0);
}
 
void TOH(int n, char x, char y, char z) {
   if (n > 0) {
      TOH(n - 1, x, z, y);
      printf("\n%c -> %c", x, y);
      TOH(n - 1, z, y, x);
   }
}
