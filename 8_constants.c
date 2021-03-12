#include <stdio.h>
#include <stdlib.h>

int main(){
    int num = 5;
    printf("%d\n",num);
    num = 8;
    printf("%d\n",num);

    const int NUMBER = 10;
    printf("%d\n",NUMBER);
    /* if we uncomment the compiler throws error
    NUMBER = 20;
    printf("%d\n",NUMBER);*/
    return 0;
}