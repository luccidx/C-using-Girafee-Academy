#include <stdio.h>
#include <stdlib.h>

int main(){
    int age = 30;
    int * pAge = &age;
    printf("%p\n", pAge);
    
    // dereferencing is going to the memory address and grabbing the information in that memory address
    // it is very simple 

    // instead of %p we use %d , 
    // and we use pointer name with '*' sign in the above case to dereference
    // its is vey simple 
    printf("%d\n", *pAge);
    //or 
    printf("%d\n", *&age);

    // %p-------pAge   (pointer)
    // %d-------*pAge  (dereferncing pointer)



    // *pAge = &age
    // *&age = age = 30 
    return 0;
}