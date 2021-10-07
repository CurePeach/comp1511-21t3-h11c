//
// By anonymous author
// On a certain date
//
// Scans 2 numbers, adds them together and prints their sum.
// Prints which are even and which are odd.
//

#include <stdio.h>

int main(void) {
    int num1;
    int num2;

    scanf("%d", &num1);
    scanf("%d", &num2);

    int sum;
    sum = num1 + num2;
    printf("Your numbers add up to %d\n", sum);

    // Check if its divisible by 2
    if (sum % 2 != 0) {
        if (num1 % 2 == 0) {
            printf("The first number you've typed was even and the second number was odd\n");
        } else if (num1 % 2 != 0) {
            printf("The first number you've typed was odd and the second number was even\n");
        }
    } else {
        if (num1 % 2 == 0) {
            printf("Both the numbers you've typed were even\n"); 
        } else if (num1 % 2 != 0) {
            printf("Both the numbers you've typed were odd\n");
        }
    }

    return 0;
}