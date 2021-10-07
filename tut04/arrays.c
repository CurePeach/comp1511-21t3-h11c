// Exploring arrays
// arrays.c
//
// This program was written by H11C
// on 7th of October
//
// Completes the tutorial questions about arrays.

#include <stdio.h>

void print_array(int array[], int length);

int main(void) {

    // TODO: create an array called zeroes of a size 7 and initialise to 0
    int zeroes[10] = {0};

    // TODO: how do we print them?
    print_array(zeroes, 10);

    /*
    printf("%d ", zeroes[0]);
    printf("%d ", zeroes[1]);
    printf("%d ", zeroes[2]);
    printf("%d ", zeroes[3]);
    printf("%d ", zeroes[4]);
    printf("%d ", zeroes[5]);
    printf("%d\n", zeroes[6]);
    */

    // TODO: create an array called ones of a size 7 and initialise to 1
    int ones[7] = {1, 1, 1, 1, 1, 1, 1};
    print_array(ones, 7);

}

void print_array(int array[], int length) {

    int i = 0;
    while (i < length) {
        printf("%d ", array[i]);
        i++;
    }
    printf("\n");

    return;
}