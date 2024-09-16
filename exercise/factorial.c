#include <stdio.h>
int factorial(int i);
int main()
{
    /* code */
    int num;
    int fac;
    printf("Enter a number:");
    scanf("%d", &num);

    fac = factorial(num);
    printf("The factorial of %d is %d", num, fac);
    return 0;
}
int factorial(int i)
{
    if (i == 0 || i == 1)
    {
        return 1;
    }
    else
    {
        return i * factorial(i - 1);
    }
}