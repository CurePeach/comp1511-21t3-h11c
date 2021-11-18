
#include <limits.h>
#include <stdio.h>

#include "list.h"

int minimum(struct node* head);

int main(int argc, char *argv[]) {
    struct node *head = args_to_list(argc, argv);

    printf("Minimum is %d\n", minimum(head));

    return 0;
}

int minimum(struct node *head) {
    // Base case
    if (head == NULL) {
        return INT_MAX;
    }

    // Recursive case
    int rest_min = minimum(head->next);
    if (rest_min < head->data) {
        return rest_min;
    }

    // 15 -> -45 -> 2 -> 10 -> X
    //       -45 -> 2 -> 10 -> X
    //              2 -> 10 -> X
    //                   10 -> X
    //                         X
    //                   10 vs 100
    //              2 vs 10
    //       -45 vs 2
    // 15 vs -45
    // -45

    return head->data;
}