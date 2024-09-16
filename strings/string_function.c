#include<stdio.h>
#include<string.h>
int main()
{
    char s[]="Uday";
    char t[]=" lingayat";
    // printf("%d\n",strlen(s)); length of a string without null character

    // printf("this was before strcpy function: %s\n",t);
    // strcpy(t,s); ** for coping one string to another 
    // printf("this is after strcpy function: %s\n",t);


    // printf("this is before strcat: %s\n",s);
    // strcat(s,t); ** for connecting 2 strings 
    // printf("this is after strcat: %s\n",s);

    //to compare 2 strings ** deep joke is negative         
    // printf("%d\n",strcmp("joke","joke"));
    // printf("%d\n",strcmp("uday","lingayat"));
    // printf("%d\n",strcmp("lingayat","uday"));
    return 0;
}