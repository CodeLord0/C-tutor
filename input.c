#include <stdio.h>
#include<stdlib.h>

int main()
{

    // int age;
    // printf("Enter your age: ");
    // scanf("%d", &age);// &age is the pointer to the variable ag
    // printf("You are %d years old\n",age);

    // double gpa;
    // printf("Enter your gpa: ");
    // scanf("%lf", &gpa); // %lf is used for double data type when using scanf, and we need to use &gpa to store the input value in the variable gpa
    // printf("You are %f years old\n",gpa);

    // char grade;
    // printf("Enter your grade: ");
    // scanf("%c", &grade); // %c is used for chars
    // printf("Your grade is %c", grade);

    // char name[20]; //tells c number of characters than can be stored to allocate memory
    // printf("enter your name: ");
    // scanf("%s", name); //exits after the first space
    // printf("your name is %s", name);

    char name[20]; //tells c number of characters than can be stored to allocate memory
    printf("enter your name: ");
    fgets(name,20,stdin); // gets an entire line of string
    printf("your name is %s", name);
    printf("jaime");
    

    return 0;
}

