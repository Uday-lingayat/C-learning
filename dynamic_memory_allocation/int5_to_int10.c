#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n=5;
    int *point;

    point = (int *)malloc(n * sizeof(int));//initializes with garbage values
    
    for (int i = 0; i < n; i++)
    {
        point[i]=i;
        printf("%d\n",point[i]);
    }
     point = (int *)realloc(point, (n*2)* sizeof(int));
     printf("\n");
      for (int i = 0; i < n*2; i++)
    {
        point[i]=i;
        printf("%d\n",point[i]);
    }

    

}