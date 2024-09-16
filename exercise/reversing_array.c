#include <stdio.h>
void rev_array(int i, int arr[]);
int main()
{ // index     0 1 2 3
    int a[] = {1, 2, 8, 4, 7, 6};
    for (int k = 0; k < 6; k++)
    {
        printf("%d ", a[k]);
    }
    printf("\n");
    rev_array(6, a);
    return 0;
}

void rev_array(int i, int arr[])
{
    int temp;
    for (int j = 0; j < i / 2; j++)
    {
        temp = arr[j];
        arr[j] = arr[i - j - 1];
        arr[i - j - 1] = temp;
    }

    for (int j = 0; j < i; j++)
    {
        printf("%d ", arr[j]);
    }
}