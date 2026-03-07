#include<stdio.h>
#include<stdlib.h>

int main()
{
    int secretNumber = 5; // number to guess
    int guess;// value being guessed
    int guessLimit  = 3; // max number of trials
    int outOfGuesses = 0;// if the are outofguesses(bolean)c has no bollean for some reason
    int guessCount = 0; // trials taken

    while(guess != secretNumber && outOfGuesses == 0)
    {

        if(guessCount != guessLimit)
        {

            printf("Enter a number: ");
            scanf("%d",&guess);
            guessCount++;

        }
        else
        {
            outOfGuesses = 1;
        }    

    }
    if(outOfGuesses == 1){
        printf("oops you are out of guesses");

    }
    else{
        printf("you win");
    }

    return 0;




}