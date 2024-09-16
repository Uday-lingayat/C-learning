#include <stdio.h>

int reversal(int num)
{
    int rev = 0, rem;
    while (num != 0)
    {

        rem = num % 10;       // getting the last digit of num in a perticular ittration
        rev = rev * 10 + rem; // adding digits to already reversed number
        num = num / 10;
        printf("%d %d\n", rev, rem);
    }
    return rev;
}
int main()
{
    int num = 7586, rev = reversal(num);

    printf("the number is %d and its reversal is  %d\n", num, rev);

    return 0;
}