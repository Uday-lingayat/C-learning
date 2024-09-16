#include <stdio.h>
int main()
{
    FILE *point;
    // point = fopen("file.txt", "w");//over writes all the data
    point = fopen("file.txt", "a");//adds the number at the end of the given data
    int num = 432;
    fprintf(point, "%d", num);
    fclose(point);
    return 0;
}