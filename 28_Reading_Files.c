#include <stdio.h>
#include <stdlib.h>

int main(){
    
    char line[255];
    // reading happens one line at a time
    // we create a string to first store the firstline so that we can print and read it in console display

    FILE * fpointer = fopen("employess.txt","r");

    fgets(line, 255, fpointer);// it allows us to read one line at a time and store it in 'line' variable here
    printf("%s", line);
    fgets(line, 255, fpointer);// when we pass fgets again it reads 2nd line and stores 
    printf("%s", line);
    fclose(fpointer);
    return 0;
}