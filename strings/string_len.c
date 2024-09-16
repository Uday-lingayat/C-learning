#include <stdio.h>
// logic= loop until you find the null character
int string_length(char ar[]);
int main()
{
    char a[] = "";
    printf("Enter a string\n");
    fgets(a, 200, stdin);
    int len = string_length(a);
    printf("length of string you entered is %d\n", len - 1);
    return 0;
}
int string_length(char ar[])
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