#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n = 10;
    int *point;
    point = (int *)malloc(n * sizeof(int)); // initializes with garbage values

    for (int i = 0; i < n; i++)
    {
        point[i] = (i + 1) * 7;
        printf("%d\n", point[i]);
    }
    point = (int *)realloc(point, (n + 5) * sizeof(int));
    for (int i = 0; i < n + 5; i++)
    {
        point[i] = (i + 1) * 7;
        printf("%d\n", point[i]);
    }
    return 0;
}
