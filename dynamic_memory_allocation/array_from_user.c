#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    int *point;
    printf("Enter the length of the string\n");
    scanf("%d", &n);
    point = (int *)calloc(n, sizeof(int)); // initializes with 0
    for (int i = 0; i < n; i++)
    {
        printf("Enter the number:\n");
        scanf(" %d",&point[i]);
    }
    printf("\n");
    for (int p = 0; p < n; p++)
    {
        printf("%d", point[p]);
    }

    return 0;
}