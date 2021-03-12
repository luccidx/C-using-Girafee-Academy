#include <stdio.h>
#include <stdlib.h>

int main(){
    int secretnumber = 5;
    int guess;
    int guesscount = 0;
    int guesslimit = 3;
    int outofguess = 0;

    while (guess!= secretnumber && outofguess ==0){
        if(guesscount < guesslimit){
            printf("Enter a number:");
            scanf("%d", &guess);
            guesscount++;
        }else{
            outofguess=1;
        }
    }
    if(outofguess ==1){
        printf("You are out of guesses\n");
    }else{
        printf("You Win! You guessed the secret number correctly");
    }
    
    return 0;
}