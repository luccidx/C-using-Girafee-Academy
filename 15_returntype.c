#include <stdio.h>
#include <stdlib.h>

double square(double num){
    double result = num*num;
    return result;
}
int main(){
    printf("Answer = %f\n", square(9));
    return 0;
}