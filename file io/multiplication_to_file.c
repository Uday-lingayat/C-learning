#include <stdio.h>
int main()
{
    FILE *point;
    point = fopen("table.txt", "a");
    int num=6;
    // fscanf(point, "%d", &num);
    // fscanf(point, "%d", &num);
    fprintf(point,"\n");
    for (int i = 1; i <= 12; i++)
    {
        fprintf(point,"%dx%d=%d \n",num,i,num*i);
    }
    fclose(point);
    return 0;
}