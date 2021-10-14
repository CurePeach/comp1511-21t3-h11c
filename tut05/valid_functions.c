//
// Author: H11C
// Date: 14th October 2021
//
// Description:
// Attempt to implement each of the functions that may or may not be valid
// in the Week 5 tutorial.


#include <stdio.h>


int test_all_positive(int length, int nums[]);


int main(void) {

    int first_array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    printf("First array = %d\n", test_all_positive(10, first_array));
    int second_array[7] = {-6, 8, 1, -4, 3, 0, -4};
    printf("Second array = %d\n", test_all_positive(7, second_array));
    
    return 0;
}


// Tests all values in the array are positive
// Takes in an array and its length
// Returns 1 if each value is positive and 0 if not
// Note. 0 is a positive number
int test_all_positive(int length, int nums[]) {
    
    int i = 0;
    while (i < length) {
        if (nums[i] <= -1) {
            return 0;
        }
    
        i++;
    }

    return 1;
}