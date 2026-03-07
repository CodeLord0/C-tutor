#include <stdio.h>
#include <stdlib.h>

int main()
{
    char colour[20];
    char pluralNoun[20];
    char celebrityF[20];
    char celebrityL[20];

    printf("Enter a colour: ");
    scanf("%s", colour);
    printf("Enter a plural noun: ");
    scanf("%s", pluralNoun);
    printf("Enter a celebrity name: ");
    scanf("%s" "%s", celebrityF, celebrityL);
     //no need for '&' when getting string input


    printf("roses are %s\n", colour);
    printf("%s are blue\n", pluralNoun);
    printf("I love %s " "%s", celebrityF,celebrityL);


    return 0;
}
