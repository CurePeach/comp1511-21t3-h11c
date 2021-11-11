// Program to do various linked list exercises
// Written by <your-name> (zID) on <date>

#include <stdio.h>
#include <stdlib.h>

#include "list.h"

struct node *new_node(int data);
void free_list(struct node *head);
struct node *last_node(struct node *head);

int main(void) {

    struct node *first = NULL;
    first = add_last(first, 10);
    first = add_last(first, 40);
    first = add_last(first, 20);
    print_list(first);

    struct node *second = NULL;
    second = add_last(second, 50);
    second = add_last(second, 12);
    print_list(second);

    struct node *third = list_append(first, second);
    print_list(third);

    first = add_last(first, 13);
    print_list(first);
    print_list(second);
    print_list(third);

    free_list(first);
    free_list(second);
    free_list(third);

    return 0;
}

/** PRESCRIBED FUNCTIONS **/

struct node *add_last(struct node *head, int data) {
    struct node *new = new_node(data);

    // Return new if linked list is initially empty
    if (head == NULL) {
        return new;
    }

    // Otherwise, loop to end of list and add node.
    struct node *curr = head;
    while (curr->next != NULL) {
        curr = curr->next;
    }
    curr->next = new;

    // We are inserting at the end --> head will not change
    return head;
}

void print_list(struct node *head) {
    struct node *curr = head;
    while (curr != NULL) {
        printf("%d -> ", curr->data);
        curr = curr->next;
    }
    printf("X\n");
}

struct node *copy(struct node *list) {
    struct node *list_copy = NULL;

    while (list != NULL) {
        list_copy = add_last(list_copy, list->data);
        list = list->next;
    }

    return list_copy;
}

struct node *list_append(struct node *first_list, struct node *second_list) {
    struct node *first_copy = copy(first_list);
    struct node *second_copy = copy(second_list);

    struct node *end_first = last_node(first_copy);
    end_first->next = second_copy;

    return first_copy;
}

int identical(struct node *first_list, struct node *second_list) {
    return 5841;
}

struct node *set_intersection(
    struct node *first_list,
    struct node *second_list
) {
    return NULL;
}

/** HELPER FUNCTIONS **/

// `new_node` will create a new node with the provided data.
//
// `new_node` will take in:
// - the data to fill the new node with.
//
// `new_node` will return a pointer to the new struct node.
struct node *new_node(int data) {
    struct node *new = malloc(sizeof(struct node));
    new->data = data;
    new->next = NULL;

    return new;
}

// `free_list` will free the entire linked list.
//
// `free_list` will take in:
// - the head of the linked list to free.
//
// `free_list` will return nothing.
void free_list(struct node *head) {
    while (head != NULL) {
        struct node *temp = head;
        head = head->next;
        free(temp);
    }

    return;
}

// `last_node` will get the last node from a linked list.
//
// `last_node` will take in:
// - the head of the linked list.
// 
// `last_node` will return a pointer to the last node in the list.
struct node *last_node(struct node *head) {
    struct node *curr = head;
    while (curr->next != NULL) {
        curr = curr->next;
    }

    return curr;
}