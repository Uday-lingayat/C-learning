#include <stdio.h>

#define pi 3.14
int main()
{
    /* format spcifier
     %c charcter
     %d integer
     %f float
     %l long
     %lf double
     %LF long double 
     %s string */
    int a = 4;
    const float b = 5.556;
    // pi=22/7; we canot cahnge value of pi since pi is predetermined using preprocessor
    // b=6.9; we cannot change value of b since b is a constant using const keyword
    printf("%17.3f\n", b);
    printf("\a hello this is something");

    return 0;
}
