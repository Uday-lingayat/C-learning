#include<stdio.h>
int main()
{
    char input[90];
    //gets(input);
    //allows us take multiple strings as input but should not be used
    fgets(input,89,stdin);
    printf("%s\n",input); 
    return 0;
}