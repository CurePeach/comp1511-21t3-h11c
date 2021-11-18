
#include <stdio.h>
#include <string.h>

void print_string_reverse(char *string);

int main(void) {
    print_string_reverse("Hello");
    printf("\n");

    return 0;
}

void print_string_reverse(char *string) {
    // Base case
    if (string[0] == '\0') {
        return;
    }

    // Recursive case
    print_string_reverse(&string[1]);
    printf("%c", string[0]);

    return;
}