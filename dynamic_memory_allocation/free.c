#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    int *point;
    printf("enter the number:\n");
    scanf("%d", &n);
    point = (int *)calloc(n , sizeof(int));

    for (int i = 0; i < n; i++)
    {
        point[i] = i + 1;

        printf("%d\n", point[i]);
    }
    free(point);
    // point = (int *)calloc(n , sizeof(int));
    for (int p = 0; p < n ; p++)
    {
        printf("%d\n", point[p]);
    }
    return 0;
}