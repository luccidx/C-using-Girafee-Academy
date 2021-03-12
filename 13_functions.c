#include <stdio.h>
#include <stdlib.h>

int main(){
    camp();
    sayHi("Santosh",21);
    sayHi("Anil",22);
    sayHi("Ananth",20);
    return 0;
}

// return type of function
// function name

void camp(){
    printf("hello geek!\n");
}

void sayHi(char name[], int age){
    printf("welcome %s, of %d years old\n", name, age);
}
// we need to call a function in order to execute in main function

