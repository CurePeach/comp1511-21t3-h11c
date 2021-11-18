
#include <stdio.h>
#include <string.h>

void print_string_reverse(char *string);

int main(void) {
    print_string_reverse("Hello");
    printf("\n");

    return 0;
}

void print_string_reverse(char *string) {

    int i = strlen(string) - 1;
    // 'h', 'e', 'l', 'l', 'o', '\0'
    //                           5
    while (i >= 0) {
        printf("%c", string[i]);
        i--;
    }

    return;
}