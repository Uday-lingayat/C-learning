#include<stdio.h>
int main()
{
    FILE *point1;
    FILE *point2;
    point1=fopen("character.txt","r");
    point2=fopen("char_write.txt","w");
    char ch=fgetc(point1);
    while (ch!=EOF)
    {
        fprintf(point2,"%c",ch);
        printf("%c",ch);
        ch=fgetc(point1);
        
    }

    fclose(point1);
    fclose(point2);
    return 0;
}