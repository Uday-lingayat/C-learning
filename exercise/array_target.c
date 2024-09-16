#include <stdio.h>
#include <stdlib.h>

/*
learning of from this exercise

1.array ko function me pass krne k baad (array[]/array[0]) se mai size nahi nikal skta kyuki wo ek pointer hai toh mujhe usse as an argument dena padega function ka
2.mujhe function se returned array ka bhi size lena padega jo ki mai return se nahi kar stka uske liye mujhe pointer use krna hoga

 */
int *twosum(int arr[], int target, int size, int *result);
int main()
{ // 0  1  2  3  4
    int array[] = {2, 2, 5, 4, 4};
    int result;
    int *result_point = &result;
    // array targetnum   size of array   poi ter of int variable in which size of returned array is stored
    int *num_array = twosum(array, 9, sizeof(array) / sizeof(array[0]), result_point);
    for (int i = 0; i < result; i++)
    {
        {
            printf("%d ", num_array[i]);
        }
    }
    free(num_array);

    return 0;
}
int *twosum(int arr[], int target, int size, int *result)
{

    int *index = NULL, num = 0; // initialized everything thing with 0 and null

    for (int i = 0; i < size; i++)
    {
        for (int j = i; j < size; j++)
        {
            if (arr[i] + arr[j] == target)
            {
                num += 2;
                index = (int *)realloc(index, num * sizeof(int));
                index[num - 1] = j;
                index[num - 2] = i;
            }
        }
    }
    *result = num;
    return index;
}
