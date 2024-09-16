#include <stdio.h>
#include <stdlib.h>

int main()
{
    int rows = 7;

    // generating a 2d array with reqiured size
    int **pascal = (int **)malloc(rows * sizeof(int *)); // making an array of int pointer with pointers as much as rows
    for (int i = 0; i < rows; i++)
    {
        pascal[i] = (int *)malloc((i + 1) * sizeof(int)); // allocation array to every pointer in pascal pointer array
    }

    // give value to the elements of the 2d array pascal first and last elements are 1
    for (int i = 0; i < rows; i++)
    {
        pascal[i][0] = 1; // the first element of every row is 1
        pascal[i][i] = 1; // the last element of every row is 1
        for (int j = 1; j < i; j++)
        {
            pascal[i][j] = pascal[i - 1][j - 1] + pascal[i - 1][j];
        }
    }
    for (int i = 0; i < rows; i++)
    {
        for (int k = 0; k < rows - i; k++)
        {
            printf(" ");
        }

        // Print the numbers in the current row
        for (int j = 0; j <= i; j++)
        {
            printf("%d ", pascal[i][j]);
        }
        printf("\n");
    }

    return 0;
}
