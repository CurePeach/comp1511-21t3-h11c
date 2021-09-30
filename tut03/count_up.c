// Counting up from 1 to n
// count_up.c
//
// This program was written by H11C
// on 30th of September
//
// Scans in a number and prints all the numbers from 1 to it one
// per line

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(void) {

    // Scan in a number
    int end;
    printf("Enter end: ");
    scanf("%d", &end);

    // Initialise
    int i = 1;
    // Condition
    while (i <= end) {
        printf("%d\n", i);
        // Increment
        i++;
    }
   
	return 0;
}