#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int input, check, score = 0;
    char yes_no;
    srand(time(NULL));
    int random_number_in_range = rand() % 100;
    printf("do you want to play the game(Y/N):\n");
    scanf("%c", &yes_no);
    if (yes_no == 'Y' || yes_no == 'y')
    {
        check = 1;
    }
    else if (yes_no == 'n' || yes_no == 'N')
    {
        check = 0;
    }

    while (check == 1)
    {
        printf("Guess the number:\n");
        scanf("%d", &input);
        if (input == random_number_in_range)
        {
            score++;
            printf("You have guess the number correctly!! \n%d is the number.\n", random_number_in_range);
            printf("you score is %d\n", score);
            printf("do you want to play the game(Y/N):\n");
            scanf(" %c", &yes_no);
            if (yes_no == 'Y' || yes_no == 'y')
            {
                check = 1;
                random_number_in_range = rand() % 115;
                score = 0;
            }
            else if (yes_no == 'n' || yes_no == 'N')
            {
                check = 0;
                break;
            }
        }
        else if (input > random_number_in_range)
        {
            score++;
            printf("The number you entered is greater than the number\n");
        }
        else if (input < random_number_in_range)
        {
            score++;
            printf("The number you entered is less than the number\n");
        }
        if (score == 10)
        {
            break;
        }
    }
    if (score == 10)
    {
        printf("You losee :( try again next time\n");
        printf("do you want to play the game(Y/N):\n");
        scanf(" %c", &yes_no);
        if (yes_no == 'Y' || yes_no == 'y')
        {
            check = 1;
        }
        else if (yes_no == 'n' || yes_no == 'N')
        {
            check = 0;
        }
    }

    printf("\nOk thank you for using the game!\n");
    return 0;
}