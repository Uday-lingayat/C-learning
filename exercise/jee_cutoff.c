#include <stdio.h>
int main()
{
    int marks, cutoff;
    char yes_no, gender;
    printf("enter your JEE advanced marks:\n");
    scanf("%d", &marks);
    printf("What is your gender(M/F):\n");
    scanf(" %c", &gender);

    if (gender == 'm' || gender == 'M')
    {
        if (marks >= 109)
        {
            yes_no = 'y';
        }
        else
        {
            yes_no = 'n';
        }
    }
    else if (gender == 'f' || gender == 'F')
    {
        if (marks >= 90)
        {
            yes_no = 'y';
        }
        else
        {
            yes_no = 'n';
        }
    }

    switch (yes_no)
    {
    case 'y':
        printf("you have quilified JEE advanced");
        break;

    default:
        printf("you have not quilified JEE advanced");
        break;
    }

    return 0;
}
