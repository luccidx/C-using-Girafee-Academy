#include <stdio.h>
#include <stdlib.h>

int main(){
    double num1;
    double num2;
    printf("Enter 1st number: ");
    scanf("%lf", &num1);
    //we use %lf in scanf for double 
    printf("Enter 2st number: ");
    scanf("%lf", &num2);

    double sum = num1+num2;
    printf("Sum of number 1 & number 2 is: %f", sum);
    // we use %f in printf for double
    return 0;
}