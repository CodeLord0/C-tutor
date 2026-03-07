#include <stdio.h>
#include <stdlib.h>

int main()
{
    // create an empty array by dlecaring the array an specify num of elements to be in it
    
    int luckyNumbers[] = {4,8,15,16,23,42};
    printf("%d", luckyNumbers[2]);// access a element in the array

    luckyNumbers[1] = 200; // modifies 8 to become 200

    return 0;
}