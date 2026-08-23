#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    srand(time(NULL));
    int guess=0;
    int tries=0;
    int max=1;
    int min=100;
    int answer=rand()%(max-min+1)+min;
    printf("*** NUMBER GUESSING GAME ***");
    do{
        printf("Guess a number between %d-%d: ", min, max);
        scanf("%d", &guess);
        tries++;
        if(guess<answer){
            printf("TOO LOW");
        }
        else if(guess>answer){
            printf("TOO HIGH");
        }
        else(guess==answer){
            printf("Correct");
        }
    }while(guess!=answer);
    printf("The answer is %d\n", answer);
    printf("It took you %d tries", tries);
    return 0;
}