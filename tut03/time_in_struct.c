// Time in a struct
// time_in_struct.c
//
// This program was written by H11C
// on 30th of September
//
// Creates a struct which holds the time in hh:mm [ap]m time
// and prints it out.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct time {
    int hours;
    int minutes;
    char am_pm;
};

int main(void) {

    // Declare 
    struct time tut_start;

    // Initialise
    tut_start.hours = 9;
    tut_start.minutes = 30;
    tut_start.am_pm = 'a';

    printf("%02d:%02d\n", tut_start.hours, tut_start.minutes);

	return 0;
}