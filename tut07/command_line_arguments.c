
#include <stdio.h>

int main(int argc, char *argv[]) {

    printf("argc = %d\n", argc);

    // ./a.out hello its me
    // argc    = 4
    // argv = {"./a.out", "hello", "its", "me"}
    // argv[0] = "./a.out"
    // argv[1] = "hello"
        // argv[1][0] = 'h'
    // argv[2] = "its"
    // argv[3] = "me"

    int i = 0;
    while (i < argc) {
        printf("argv[%d] = ", i);
        // printf("%s\n", argv[i]);
        
        char *word = argv[i];
        int j = 0;
        while (word[j] != '\0') {
            printf("%c", word[j]);
            j++;
        }
        printf("\n");
        
        i++;
    }

    return 0;
}
