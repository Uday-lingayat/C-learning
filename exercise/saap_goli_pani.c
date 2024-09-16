#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
int main()
{
    srand(time(NULL));
    int random, human_score = 0, comp_score = 0;
    char computer[8], human[8], check;

    printf("Do you want to play snake gun water?(y/n) \n");
    scanf(" %c", &check);
    while ((check == 'y' || check == 'Y') && human_score < 5 && comp_score < 5)
    {
        random = rand() % 100;
        // asinging snake water gun to computer a single cycle
        if (random <= 30)
        {
            strcpy(computer, "snake");
        }
        else if (30 < random && random < 60)
        {
            strcpy(computer, "water");
        }
        else if (random >= 60)
        {
            strcpy(computer, "gun");
        }

        printf("Enter your choice(snake/water/gun):\n");
        scanf(" %s", human);
        printf("computer chose %s\n", computer);
        printf("you chose %s\n", human);

        if (strcmp(computer, human) == 0)
        {
            human_score++;
            comp_score++;
            printf("OHH IT IS A TIE\n");
            printf("you:%d computer:%d\n", human_score, comp_score);
        }
        // human = snake
        else if (strcmp("snake", human) == 0 && strcmp(computer, "water") == 0)
        {

            human_score++;
            printf("you:%d computer:%d\n", human_score, comp_score);
        }
        else if (strcmp("snake", human) == 0 && strcmp(computer, "gun") == 0)
        {

            comp_score++;
            printf("you:%d computer:%d\n", human_score, comp_score);
        }
        // human= water
        else if (strcmp("water", human) == 0 && strcmp(computer, "snake") == 0)
        {

            comp_score++;
            printf("you:%d computer:%d\n", human_score, comp_score);
        }
        else if (strcmp("water", human) == 0 && strcmp(computer, "gun") == 0)
        {

            human_score++;
            printf("you:%d computer:%d\n", human_score, comp_score);
        }
        // human= gun
        else if (strcmp("gun", human) == 0 && strcmp(computer, "water") == 0) // water
        {

            comp_score++;
            printf("you:%d computer:%d\n", human_score, comp_score);
        }
        else if (strcmp("gun", human) == 0 && strcmp(computer, "snake") == 0) // snake
        {

            human_score++;
            printf("you:%d computer:%d\n", human_score, comp_score);
        }

        if (human_score == 5 || comp_score == 5)
        {
            if (human_score == 5)
            {
                printf("You won!\n");
            }
            else if (human_score == comp_score && comp_score == 5)
            {
                printf("OOPS it was a tie\n");
            }
            else
            {
                printf("Better luck next time:(\n");
            }

            printf("Do you want to play again? \n");
            scanf(" %c", &check);
            if (check == 'y' || check == 'Y')
            {
                human_score = 0;
                comp_score = 0;
            }
            if (check == 'n' || check == 'N')
            {
                break;
            }
        }
    }

    if (check == 'n' || check == 'N')
    {
        printf("Thank you for playing this game :) \n");
    }

    return 0;
}