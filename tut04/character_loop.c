// Scanning in characters in a loop
// character_loop.c
//
// This program was written by H11C
// on 7th of October
//
// Scans in characters until CTRL+D is pressed.
// If a letter is pressed, print which letter was pressed.

#include <stdio.h>

int main(void) {

    // INITIALISATION
    char c;
    int result = scanf("%c", &c);

    // CONDITION
    while (result == 1) {

        printf("'%c' scanned in!\n", c);

        // INCREMENT
        result = scanf("%c", &c);
    }

    /*
    int num;
    while (scanf("%d", &num) == 1) {
        printf("'%d' scanned in!\n", num);
    }
    */

    return 0;
}
