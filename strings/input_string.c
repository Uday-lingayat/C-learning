#include<stdio.h>
int main()
{
    char intput[6];
    printf("Enter a word of 5 letter:\n");
    scanf("%s",intput);//can't use to take multiple string as input (strings with spaces or new line character)
    printf("%s is the word that you enterd\n",intput);
    return 0;
}