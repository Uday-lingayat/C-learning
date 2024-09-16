#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    char *point;
    printf("Enter the length of the string\n");
    scanf("%d",&n);
    point = (char *)calloc(n, sizeof(char));//initializes with 0 
    printf("Enter the string\n");
    scanf("%s",point);
    for (int i = 0; i < n; i++)
    {
        printf("%c",point[i]);
    }
    
    
    return 0;
}