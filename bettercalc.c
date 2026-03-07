#include <stdio.h>
#include <stdlib.h>

int main()
{
    double num1;
    double num2;
    char op;

    printf("Enter a number: ");
    scanf("%lf", &num1);
    printf("Enter operator: ");
    scanf(" %c", &op); // get a character from the user. give space before %c
    printf("Enter a number: ");
    scanf("%lf", &num2);

    if(op == '+')
    {
        printf("%f", num1 + num2);
    }

    else if(op == '-')
    {
        printf("%f", num1 - num2);
    }

    else if(op == '/')
    {
        printf("%f", num1 / num2);
    }

    else if(op == '*')
    {
        printf("%f", num1 * num2);
    }
    else{
        printf("invalid operator");
    }

}