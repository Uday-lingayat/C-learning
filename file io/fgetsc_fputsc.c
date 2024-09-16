#include <stdio.h>
int main()
{

    FILE *point;
    point = fopen("file.txt","r");
    printf(" %c%c%c\n",fgetc(point),fgetc(point),fgetc(point));
    // point = fopen("file.txt","a"); 
    // fputc('h',point);
    fclose(point);
    return 0;
}