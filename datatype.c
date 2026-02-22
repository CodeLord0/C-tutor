#include <stdlib.h>
#include <stdio.h>
int main()
{
    // %s for string
    // %d for integers
    // %f for doubles
    // %c for chars
    int age = 40; //integer
    double gpa = 3.6; //doubles are decimal numbers
    char grade = 'F'; // char stores only one chracter
    char phrase[] = "giraffe Academy"; // creates a 'string' of chracters but is actually an array
    printf("write the decimal %f and the char %c", gpa, grade);


    return 0;


}