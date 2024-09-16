#include<stdio.h>
int main()
{
    int a=34;
    int *ptra=&a;
    char t='t';
    char *ptrt=&t;
    printf("%d\n",ptra);
    printf("%d\n",ptra+1);//increase by 1 size of int 4bit in this structure
    printf("%d\n",ptrt);//character takes 1 bit
    printf("%d\n",ptrt+1);//character takes 1 bit
    printf("%d\n",ptra);
    return 0;
}