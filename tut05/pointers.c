// Exploring pointers
// pointers.c
//
// This program was written by H11C
// on 14th of October
//
// Exploring pointers and how to use them

#include <stdio.h>

void sum_nums(int a, int b, int *sum);
int *max(int *a, int *b);

int main(void) {

    int sum = 0;
    int *sum_location = &sum;

    int *second_location;
    second_location = sum_location;
    *second_location = 23;

    printf("sum = %d\n", sum);
    sum_nums(78, 3, sum_location);
    printf("sum = %d\n", sum);

    int first = 10;  // 0x7ffc4bcb4530
    int second = 20; // 0x7ffc4bcb4540

    printf("first is at %p\n", &first);
    printf("second is at %p\n", &second);
    printf("the max is at %p\n", max(&first, &second));

    return 0;
}

// Sums two numbers and stores the result in the int pointer
// Takes in two numbers and an int pointer
// Returns nothing
void sum_nums(int a, int b, int *sum) {
    int result = a + b;
    *sum = result;

    return;
}


// Finds which int pointer has the larger value
// Takes in two int pointers 
// Returns the int pointer which has the larger value
int *max(int *a, int *b) {
    if (*a > *b) {
        return a;
    } else {
        return b;
    }

    return a;
}
