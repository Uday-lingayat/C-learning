#include <stdio.h>
typedef struct complex
{
    int x, y;

} complex;
void show(complex e)
{

    printf("The complex number is %d+%di\n", e.x, e.y);
}
int main()
{
    complex c[5];
    for (int i = 0; i < 5; i++)
    {
        printf("enter the real part of complex number\n");
        scanf("%d", &c[i].x);
        printf("enter the imaginary part of complex number\n");
        scanf("%d", &c[i].y);
        show(c[i]);
    }

    return 0;
}
