#include <stdio.h>
/*print a mulitplication table of a number entered by a the user in following form
example:
enter number you want muliplication of :
6
output:*/
int main()
{
    /* int a;
    printf("Enter number you want multiplication of:\n");
    scanf("%d", &a);

    printf("This is multiplication table of %d", a);
    printf("\n %dx1=%d", a, a * 1);
    printf("\n %dx2=%d", a, a * 2);
    printf("\n %dx3=%d", a, a * 3);
    printf("\n %dx4=%d", a, a * 4);
    printf("\n %dx5=%d", a, a * 5);
    printf("\n %dx6=%d", a, a * 6);
    printf("\n %dx7=%d", a, a * 7);
    printf("\n %dx8=%d", a, a * 8);
    printf("\n %dx9=%d", a, a * 9);
    printf("\n %dx10=%d", a, a * 10);

    return 0; */
     int i = 0, num;
        printf("enter a number:\n");
        scanf("%d", &num);
        printf("The multiplication tabel of %d is\n",num);
        do
        {
                i = i + 1;
                printf("%dx%d=%d\n", num, i, i * num);

        } while (i < 12);
    return 0;
}
