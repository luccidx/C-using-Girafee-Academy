#include <stdio.h>
#include <stdlib.h>

int main(){
    int age = 21;
    double gpa = 8.74;
    char grade='A';

    // variable store the value assigned to it
    // the value is access by calling the name of the variable 

    // where as each are stored in sperate memory address in RAM 
    // in order to access directly the physical memory address we using pointers
    // the adress in memory are hexa-decimal 
    printf("age: %p\ngpa: %p\ngrade: %p", &age, &gpa, &grade);
    // %p is used to access the pointer(address of the variable)
    // we use '&' sign to access the address
}