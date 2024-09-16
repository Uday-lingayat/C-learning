#include <stdio.h>
int main()
{
    FILE *point;
    point = fopen("file.txt", "r");
    char ch;
    while (1)
    {
        ch=fgetc(point);
        printf("%c\n",ch);

        if (ch==EOF)
        {
            printf("The file has been completely read\n");
            break;
        }
        
    }
    
    return 0;
}