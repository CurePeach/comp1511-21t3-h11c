// A program that reads in an integer and prints out a pattern of bars and
// asterisks
// e.g. if 5 is entered:
//    -*-*-
//    -*-*-
//    -*-*-
//    -*-*-
//    -*-*-
// Elizabeth Gibbs z3413764
// Sept 2021

#include <stdio.h>
int main(void) {
    int size;
    printf("Please enter an integer: ");
    scanf("%d", &size);
    // TODO
    int row = 0;
    while (row < size) {
        int col = 0;
        while (col < size) {
            if (col % 2 == 0) {
                printf("-");
            } else {
                printf("*");
            }
            col++;
        }
        printf("\n");
        row++;
    }
    return 0;
}
