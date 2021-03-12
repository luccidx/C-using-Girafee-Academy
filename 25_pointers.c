#include <stdio.h>
#include <stdlib.h>

// pointer is a type of data just like other data types

// pointer is just a memory address
int main(){
    int age = 30;
    // we created a integer variable which is storing a integer value 
    double gpa =8.5;
    // we craeted a double variable which stores a decimal value
    char grade ='A';
    // we created a character variable which stores a charater value

    //similarly we can create a pointer variable using the physical memory address as its value

    // since we don't know memory address in a RAM of our PC 
    // we use physical memory address of already present variable 
    // example-

    int * pAge = &age;
    printf("age address(by pointer variable) --> %p\n", pAge);
    printf("age address(by direct assign)    --> %p\n", &age);
    // we observe same memory address in the terminal when we run the program 

    // so we assigned the address of age in pAge using * sign and accessed using & sign    
    
    double * pGpa = &gpa;
    char * pGrade = &grade;
    printf("gpa address -->%p\n", pGpa);
    printf("grade address -->%p\n", pGrade);
    
    
    return 0;
}