#include <stdio.h>
#include <stdlib.h>

double cube(double num); // this is a prototype > to be able to declare functions under main

int main()
{
    printf("Answer: %f", cube(7));

    //sayHi("mike",10);

    return 0;

}

// void sayHi(char name[], int age)//parameters)
// {
//     printf("Hello %s\n", name);
// }
double cube(double num)
{
    return num * num * num;
}
