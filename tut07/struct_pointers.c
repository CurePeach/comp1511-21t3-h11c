//
// Author: H11C
// Date: Thursday 28th October
//
// Description:
// Manipulate structs through pointers.

#include <stdio.h>
#include <string.h>

#define MAX_STRING_LENGTH 64
#define ZID_LENGTH 7 + 1

struct student {
    char name[MAX_STRING_LENGTH];
    char zid[ZID_LENGTH];
    double wam;
};

int main(void) {

    struct student stu;
    struct student *stu_ptr = &stu;
    
    // (*stu_ptr).wam = 100;
    stu_ptr->wam = 100;
    
    // int array[3] = {1, 2, 3};
    // array = {4, 5, 6}; DOES NOT WORK
    // array[0] = 4;
    // array[1] = 5;
    // array[2] = 6;
    // stu_ptr->name = "Clarissa" DOES NOT WORK
    strcpy(stu_ptr->name, "Clarissa");
    strcpy(stu_ptr->zid, "z7777777");

    return 0;
}