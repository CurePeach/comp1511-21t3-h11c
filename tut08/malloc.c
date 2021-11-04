//
// Author: H11C
// Date: 3rd November 2021
//
// Description:
// Exploring malloc().

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAME_LENGTH 64

struct student {
    int zID; 
    double mark; 
    char name[MAX_NAME_LENGTH]; 
};

struct student *create_student(int zID, double mark, char *name);

int main(void) {
    // TODO: how do we use sizeof? 
    printf("char :: %zu\n", sizeof(char));
    printf("int :: %zu\n", sizeof(int));
    printf("double :: %zu\n", sizeof(double));
    
    // TODO: how do we use malloc?
    // int *num = malloc(sizeof(int));

    struct student *clarissa = create_student(300, 100, "Clarissa");
    printf("zID: %d\n", clarissa->zID);
    printf("mark: %lf\n", clarissa->mark);
    printf("name: %s\n", clarissa->name);

    return 0;
}

// struct student {
//     int zID; 
//     double mark; 
//     char name[MAX_NAME_LENGTH]; 
// };

struct student *create_student(int zID, double mark, char *name) {
    struct student *stu = malloc(sizeof(struct student));
    stu->zID = zID;
    stu->mark = mark;
    strcpy(stu->name, name);

    return stu;
}