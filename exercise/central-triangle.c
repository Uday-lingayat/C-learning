#include<stdio.h>
int main()
{
    int rows=50;
    for (int i = 0; i < rows; i++)
    {
        // just comment out the below part to have normal triangle 
        for (int k = 0; k < rows-i; k++)
        {
            printf(" ");
        }
        
        for (int j = 0; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}