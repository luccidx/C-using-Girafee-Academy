#include <stdio.h>
#include <stdlib.h>

int main(){
    // with files we can 1)write 2)read & 3)append using C
    
    FILE * fpointer = fopen("employess.txt","w");

    // FILE is like a data type in C representing file
    // * fpointer is creating a pointer for a physical memory address in PC which is storing the information in employees.txt file
    // fopen() is used to open a file where we do operations 
    // fclose() is cumpolsory when we use fopen() which closes the file opened
    // we need to give certain parameters in fopen()
    // employees.txt is the type of file we are creating, here we are creating a text file
    // "w"- write, "r"-read, "a"-append (type of opearation to be performed)
    

    //NOTE: the txt file get saved in the same directory as that of the C file is 
    // so if we want to change directory we can mention as C:\....

    fprintf(fpointer, "Mike, Programmer\nSantosh, Learner");
    // fprintf ---- NOT printf
    
    // if we put anything new in fprintf with "w" mode then the existing information gets overwritten by the new information

    // so we use 'a' append mode to add new information to the existing information in same file

    // FILE * fpointer = fopen("employess.txt","a");
    // fprintf(fpointer, "\nfreecodecamp, platform");
    
    
    fclose(fpointer);
    return 0;
}