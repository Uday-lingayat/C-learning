#include <stdio.h>
int count(int i, int a[i])
{
    int pos = 0;
    for (int i = 0; i < 6; i++)
    {
        if (a[i] > 0)
        {
            pos++;
        }
    }
    return pos;
}
int main()
{
    int a[6] = {1, 2, 3, 2, -3, -1}, pos = count(6, a);

    printf("number of positive numbers in it: %d\n", pos);

    return 0;
}