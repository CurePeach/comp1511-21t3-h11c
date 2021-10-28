//
// Author: H11C
// Date: Thursday 28th October
//
// Description:
// Reads lines of input and prints them twice.


#include <stdio.h>

#define MAX_STR_LENGTH 64

void echo_twice(char *string);
void remove_new_line(char *string);

int main(void) {

    char line[MAX_STR_LENGTH];
    while (fgets(line, MAX_STR_LENGTH, stdin) != NULL) {
        remove_new_line(line);
        echo_twice(line);
    }

    return 0;
}

void echo_twice(char *string) {
    printf("%s\n", string);
    printf("%s\n", string);
}

void remove_new_line(char *string) {

    int i = 0;
    while (string[i] != '\0') {
        if (string[i] == '\n') {
            string[i] = '\0';
        }
        i++;
    }

}