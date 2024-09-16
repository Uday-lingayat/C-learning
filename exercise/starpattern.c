#include <stdio.h>
/*
 *
 **
 ***
 ****
 */
void starline(int i);
void starpattern(int j);

int main()
{
    int row;
    printf("Enter number of rows:");
    scanf("%d", &row);
    starpattern(row);
    return 0;
}
void starline(int i)
{
    for (int l = 1; l <= i; l++)
    {
        printf("*"); //for star pattern
        // printf("%d",l); for the number table pattern
    }
}
void starpattern(int j)
{
    for (int o = 1; o <= j; o++)
    {
        starline(o);
        printf("\n");
    }
}
