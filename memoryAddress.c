#include<stdio.h>
#include<stdlib.h>

int main()
{
    // a pointer stores the physical memory address and represent with &variable name
    // pointers are datatypes just like ints

    int age = 30;
    int * pAge  = &age; // stores the memory address of age
    double gpa = 3.4;
    double * pGpa = &gpa;
    char grade = 'A';
    char * pGrade = &grade;

    printf("%d", *pAge);// dereferencing the pointer variable- geting the real value the memory address was pointing to
    //printf("age: %p, grade: %p", &age, &grade);
    return 0;
}