#include<stdio.h>
int main()
{
    char string[6]="hello";
    for (int i = 0; i < 5; i++)//method 1 of printing a string (a array of characters)
    {
        printf("%c",string[i]);
    }
    printf("%s",string);//method 2 of printing a string 
    return 0;
}