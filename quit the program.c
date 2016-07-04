#include <stdio.h>
int main() {
    char a;
    for(;;) {
        printf( "\nPress any key, Q to quit: " );
        scanf("%c", &a);
        if (a == 'Q')
            break;
    }
 } 
