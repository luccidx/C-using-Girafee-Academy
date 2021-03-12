#include <stdio.h>
#include <stdlib.h>

int main(){

    int i;
    for(i=1;i<=5;i++){
        printf("%d\n", i);
    }

    printf("\n");
    //using for loops in array
    int number[] ={1,2,3,4,5};
    for(int i=0;i<5;i++){
        printf("%d\n", number[i]);
    }
    return 0;
}