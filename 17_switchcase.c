#include <stdio.h>
#include <stdlib.h>

int main(){
    char grade;
    printf("Enter your Grade:\n");
    scanf("%c", &grade);

    switch (grade)
    {
    case 'A':
        printf("you did great!\n");
        break;
    case 'B':
    printf("you did aright\n");
    default:
        printf("INVALID");
        break;
    }
return 0;
}