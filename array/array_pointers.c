#include<stdio.h>
int main()
{
    int arr[10];
    int *ptr=arr;//valid arrugment and the pointer store the address of index of array
    printf("%p\n",ptr); // &arr[0]=ptr
    printf("%p",&arr[0]);
    return 0;
}