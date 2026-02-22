#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main()
{
    //if dividing an integer with a decimal, a decimal answer will be returned
    //printf("%f", 5/4.0); returns a decimal ; 5/4 truncets the decimal and returns an integer
    printf("%f\n",5.0/4.0);

    printf("%f",ceil(2.0));// always rounds up

    return 0;
}