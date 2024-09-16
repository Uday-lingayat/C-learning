#include <stdio.h>
#include <stdlib.h>
int main()
{
    int number, p;
    printf("Enter number of terms in fibonaci series you want: ");
    scanf("%d", &number);
    int *fab;
    fab = (int *)malloc(number * sizeof(int));
    // printing fab[i] along with strong series in fab array

    for (int i = 0; i < number; i++)
    {
        if (i == 0 || i == 1)
        {
            fab[i] = i;
            printf("%d ", fab[i]);
        }
        else
        {
            fab[i] = fab[i - 1] + fab[i - 2];
            printf("%d ", fab[i]);
        }
    }
    return 0;
}