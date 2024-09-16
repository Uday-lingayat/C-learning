#include <stdio.h>

char *strcopy(char source[], char target[]);

int main()
{
    char name[] = "uday";
    char surname[] = "lingayat";
    printf("This is before calling the function %s\n", surname);
    strcopy(name, surname);
    printf("This is after calling the function  %s\n", surname);

    return 0;
}
int string_length(char ar[]) // made by my self in string_len.c program
{

    int len = 0, i = 0;
    char c = ar[i];
    while (c != '\0')
    {
        i++;
        c = ar[i];
        len++;
        if (c == ' ')
        {
            len--;
        }
    }
    return len;
}
char *strcopy(char source[], char target[])
{
    int len=string_length(source);
    char *ptr = target;

    for (int i = 0; i <=len; i++)
    {
        target[i] = source[i];
    }

    // target[len]='\0';
    return ptr;
}