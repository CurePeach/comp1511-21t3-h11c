
#include <stdio.h>

int main(void) {
    printf("17 %% 5 = %d\n", 17 % 5);
    printf("-17 %% 5 = %d\n", -17 % 5);
    
    char letter = 'A';
    // letter = letter + 5;
    letter += 5;
    printf("A + 5 = %c\n", letter);
    printf("A + 5 = %d\n", letter);
    
    letter = 'A' + ('a' - 'A');
    printf("A + 32 = %c\n", letter);
    printf("A + 32 = %d\n", letter);
    
    return 0;
}