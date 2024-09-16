#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    int *point;
    printf("enter the number:\n");
    scanf("%d", &n);
    point = (int *)calloc(n, sizeof(int)); // initializes with 0

    for (int i = 0; i < n; i++)
    {
        point[i] = i + 1;

        printf("%d\n", point[i]);
    }
    point = (int *)realloc(point, (n + 1) * sizeof(int)); // only changes the size
    for (int p = 0; p < n + 1; p++)
    {
        printf("%d\n", point[p]);
    }
    return 0;
}
