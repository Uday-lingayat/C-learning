#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    int *point;
    printf("enter the number:\n");
    scanf("%d", &n);
    point = (int *)malloc(n * sizeof(int));//initializes with garbage values

    for (int i = 0; i < n; i++)
    {
        point[i] = i + 1;
        printf("%d\n", point[i]);
    }
    return 0;
}

 