#include <stdio.h>

#include "list.h"

void handle_command(struct list *pancake, char command);

int main(void) {
    struct list *pancake = create_list();

    char command;
    printf("Enter command: ");
    while (scanf(" %c", &command) == 1) {
        handle_command(pancake, command);
        printf("Enter command: ");
    }
    return 0;
}

// Handles a command
void handle_command(struct list *pancake, char command) {
    char extra_data[MAX_STR_LENGTH];

    // TODO: Finish this function. Add more command conditions!
    //
    // Important commands:
    // - 'a' <name>: place new pancake onto pancake stack
    // - 'e':        eat top pancake
    // - 'p':        print pancake stack
    //
    if (command == 'a') {
        fgets(extra_data, MAX_STR_LENGTH, stdin);
        push_head(pancake, extra_data);
        printf("Added: %s", extra_data);
    } else if (command == 'e') {
        // Using the old list.h
        // struct node *eaten = pop_front(pancake);
        // printf("Customer has eaten %s\n", eaten->????);
        printf("Customer has eaten %s", peek_top(pancake));
        pop_front(pancake);
    }
}