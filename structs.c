#include <stdio.h>
#include <stdlib.h>
#include<string.h>

struct Student // just like a classs. create a template for a 'struct;
{
    char name[50];
    char major[50];
    int age;
    double gpa;
};




int main()
{
    
    struct  Student student1;// create a struct 'object'
    student1.age = 22;
    student1.gpa = 3.2;
    strcpy(student1.name, "tom");
    strcpy(student1.major,"busienss");

    printf("%s", student1.name);
    return 0;
}