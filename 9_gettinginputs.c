#include <stdio.h>
#include <stdlib.h>

int main(){
    int age;
 //   char A;
    double GPA;
    char name[20];
    
    printf("Enter your name:");
    scanf("%s", name);
    printf("Your name is: %s\n", name);

//problem with scanf is 
//when taking in strings 
//it takes only till first white space 
//after whitespace it is not considered

//try example with inputting your name as
// santosh kumar ---> 
//then only santosh is taken as input

//    printf("Enter your grade:");
 //   scanf("%c", &A);
  //  printf("Your grade is %c \n", A);
    
    printf("Enter your age:");
    scanf("%d", &age);
    printf("You are %d years old\n", age);

    printf("Enter your GPA:");
    scanf("%lf", &GPA);
    printf("Your GPA is = %lf\n", GPA);

    return 0;
}