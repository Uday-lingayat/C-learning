#include <stdio.h>
int main(int argc, char const *argv[])
{
    /* code */
    int a, b;
    a = 2;
    b = 3;
    printf("a-b=%d\n", a - b);
    printf("a*b=%d\n", a * b);
    printf("a/b=%d\n", a / b);
    printf("a+b=%d\n", a + b);
    printf("a&&b=%d\n", a && b); // both are non zero integers
    printf("a||b=%d\n", a || b);
    printf("a==b=%d\n", a == b);
    printf("a!=b=%d\n", a != b);
    printf("a&b=%d\n", a & b);

    return 0;
}
