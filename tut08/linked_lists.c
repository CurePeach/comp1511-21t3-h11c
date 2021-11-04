// Tutorial WK 8 - Linked Lists
// COMP1511 21T3

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAME_LENGTH 50

struct student {
    int zID;
    double mark;
    char name[MAX_NAME_LENGTH];
    struct student *next;
};

struct student *create_student(int zID, double mark, char *name);
void print_student_names(struct student *first_student);
struct student *add_student_to_end(
    struct student *first_student, 
    struct student *new_student
);

int main(void) {
    /*
    PART ONE: Making and linking students one by one

    struct student *clarissa = create_student(300, 100, "Clarissa");
    printf("zID: %d\n", clarissa->zID);
    printf("mark: %lf\n", clarissa->mark);
    printf("name: %s\n", clarissa->name);

    struct student *liz = create_student(200, 50, "Liz");
    printf("zID: %d\n", liz->zID);
    printf("mark: %lf\n", liz->mark);
    printf("name: %s\n", liz->name);

    clarissa->next = liz;
    printf("name: %s\n", clarissa->next->name);

    struct student *rohan = create_student(500, 50000, "Rohan");
    liz->next = rohan;
    printf("name: %s\n", clarissa->next->next->name);

    struct student *fatima = create_student(450, 60000, "Fatima");
    rohan->next = fatima;
    printf("name: %s\n", clarissa->next->next->next->name);*/
    
    // PART TWO: USING FUNCTIONS
    struct student *clarissa = create_student(300, 100, "Clarissa");
    struct student *liz = create_student(200, 50, "Liz");
    struct student *rohan = create_student(500, 50000, "Rohan");
    struct student *fatima = create_student(450, 60000, "Fatima");

    struct student *first_student = add_student_to_end(NULL, clarissa);
    first_student = add_student_to_end(first_student, liz);
    first_student = add_student_to_end(first_student, rohan);
    first_student = add_student_to_end(first_student, fatima);

    print_student_names(first_student);

    return 0;
}

// Create a new struct student
struct student *create_student(int zID, double mark, char *name) {
    struct student *new_student = malloc(sizeof(struct student));
    new_student->zID = zID;
    new_student->mark = mark;
    strcpy(new_student->name, name);
    new_student->next = NULL;

    return new_student;
}


// Print out all of the struct students
void print_student_names(struct student *first_student) {
    struct student *curr = first_student;
    while (curr != NULL) {
        printf("%s\n", curr->name);
        curr = curr->next;
    }
}

// Add student to end of students list
struct student *add_student_to_end(
    struct student *first_student, 
    struct student *new_student
) {
    struct student *curr = first_student;

    // No students in the list
    if (curr == NULL) {
        return new_student;
    }
    
    // There are students, find last one and then add new to end
    while (curr->next != NULL) {
        curr = curr->next;
    }

    curr->next = new_student;
    
    return first_student;
}