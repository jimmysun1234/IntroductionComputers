#ifndef MYHEAD_H
#define MYHEAD_H

#include <stdio.h>

typedef struct {
    char name[50];
    char department[50];
    int grade;
    char sid[50];

} Student;

void printStudents (Student students[], int numStudents);

#endif // MYHEAD_H
