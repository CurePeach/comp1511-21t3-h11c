// Checks if the user inputs an even or an odd number
// is_even.c
//
// This program was written by H11C
// on 7th of October
//
// Scans in a number and tells the user if it was even or odd

#include <stdio.h>

int is_even(int num);
void print_even(int num);

int main(void) {

    printf("Enter number: ");
    int num;
    scanf("%d", &num);

    // TODO: how can we use a function named `is_even` to complete this
    // program?
    print_even(num);

    return 0;
}

// Checks if a number is even <- description
// Takes in a single integer <- input
// Returns 1 if it is even or 0 if it is odd <- output
int is_even(int num) {

    if (num % 2 == 0) {
        // printf("1\n");
        return 1;
    }

    return 0;
}

// Prints if a number is even
// Takes in a single integer
// Returns nothing
void print_even(int num) {

    int result = is_even(num);
    if (result == 1) {
        printf("Even\n");
    } else {
        printf("Odd\n");
    }

    return;
}