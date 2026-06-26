//Number Guessing Game
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    srand(time(0));
    int guessed,pass=1,num=rand()%100+1;
    printf("Welcome to the Number Guessing Game!\n");
    printf("You have to guess the number from 1 to 100!\n");
    printf("Guess the number:");
    scanf("%d",&guessed);
    while(guessed!=num)
    {
        if(guessed<num)
        {
            printf("Higher number please!\n");
            printf("Guess the number:");
            scanf("%d",&guessed);
            pass++;
        }
        else if(guessed>num)
        {
            printf("Lower number please!\n");
            printf("Guess the number:");
            scanf("%d",&guessed);
            pass++;
        }
    }
    if(guessed==num)
    {
        printf("Congratulations!\nYou guessed the number in exactly %d guess(s).\nThank you for playing the game!\n",pass);
    }
    return 0;
}