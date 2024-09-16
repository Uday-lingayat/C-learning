#include<stdio.h>
int main()
{
    int arr[100],num=564512,i=0;
    printf("%d\n",num);
    while (num!=0)
    {
        arr[i]=num%10;
        num=num/10;
        i++;
    }

    for (int t = 0; t < i; t++)
    {
        printf("%d",arr[t]);
    }
    
    
    return 0;
}