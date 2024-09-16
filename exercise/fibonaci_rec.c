#include<stdio.h>
int fib(int i);
int main()
{
    int terms;
    printf("Enter number of terms you want to print in fibonaic series:");
    scanf("%d",&terms);  
    for (int i = 0; i < terms; i++)
    {
        printf("%d ",fib(i));
    }
    
    
    return 0;
}
int fib(int i){
    if (i==0||i==1)
    {
        return i;
    }
    else
    {
        return fib(i-1)+fib(i-2);
    }
    
}