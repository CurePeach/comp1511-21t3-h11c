
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
    // if (head == NULL) {
    //     return INT_MAX;
    // }

    struct node *curr = head;
    int minimum = INT_MAX;
    while (curr != NULL) {
        if (minimum > curr->data) {
            minimum = curr->data;
        }
        curr = curr->next;
    }

    return minimum;
}