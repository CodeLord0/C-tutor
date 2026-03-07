#include <stdio.h>
#include <stdlib.h>

int main()
{
    // w for write , a for append and r for read
    char line[255];
    FILE  * fpointer = fopen("employees.txt", "r");
    // fprintf(fpointer,"\ntim cook,line manager\ntroy,jaintor");
    fgets(line, 255, fpointer); // reads the first line of the file
    fgets(line, 255, fpointer); // reads the second line of the file

    printf("%s", line);
    
    fclose(fpointer);
}
