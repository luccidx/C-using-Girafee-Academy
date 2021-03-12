#include <stdio.h>
#include <stdlib.h>

int main(){
    char name[20];
    printf("Enter your name:");
    // since in scanf() we can't insert fullname
    // we use fgets to get full name of strings
    // without the barrier of whitespace
    fgets(name, 20, stdin);
    // fgets(variable, size, stdin);
    // here variable is where we need to store 
    // size is limit of char we can insert
    // stdin is used to indicate that input is from standard input console(keyboard in case of us here)
    printf("Your name is %s", name);

    //********DRAWBACK********
    // with fgets when we insert the string and press enter
    // enter is taken as string and a new line is inserted 
    return 0;
}