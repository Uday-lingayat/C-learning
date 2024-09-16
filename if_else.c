#include <stdio.h>
int main()
{
    /* code */
    int age;
    printf("enter you age as per adhar card\n");
    scanf("%d", &age);
    printf("you have entered %d as you age.\n", age);
    if (age >= 18)
    {
        printf("you are eligible to apply for voter card ");
    }
    else if (age == 17)
    {
        printf("you can apply for voter card next year");
    }

    else
    {
        printf("you are not eligible to apply for voter card");
    }

    return 0;
}
