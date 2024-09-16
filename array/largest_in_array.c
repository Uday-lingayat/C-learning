#include<stdio.h>
int largest_in_array(int n,int a[]){
    int max=0,temp;
    for (int i = 0; i < n; i++)
    {
        if (a[i]>max)
        {
            max=a[i];
        }
        
    }
    return max;
    
}
int main()
{       
    int a[5]={100,92,23,46,55};
    printf("the max is %d\n",largest_in_array(5,a));
    return 0;
}