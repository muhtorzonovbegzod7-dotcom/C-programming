#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    srand(time(NULL));
    int guess=0;
    int tries=0;
    int max=1;
    int min=100;
    int answer=rand()%max+min;
    printf("*** NUMBER GUESSING GAME ***");
    do{
        printf("Guess a number between %d-%d: ", min, max);
        scanf("%d", &guess);
        tries++;
        if(guess<answer){
            printf("TOO LOW");
            break;
        }
        else if(guess>answer){
            printf("TOO HIGH");
            break;
        }
        else(guess==answer){
            printf("Correct");
            break;
        }
    }while(guess!=answer);
    printf("The answer is %d\n", answer);
    printf("It took you %d tries", tries);
    return 0;
}
