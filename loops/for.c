#include <stdio.h>
int main()
{
    /* code */
    int i, j, num;
    printf("Enter a number:\n");
    scanf("%d", &num);
    printf("The following pair gives sum as %d : \n", num);

    for (j = 0, i = num /* jab tak */; i >= 0, j <= num; i--, j++)
    {
        if (num == 69)
        {
            printf("you pervert");
            break;
        }

        printf("%d+%d=%d\n", i, j, num);
    }

    return 0;
}
