#include <stdio.h>
int main()
{
        int i = 0, num;
        printf("enter a number:\n");
        scanf("%d", &num);
        printf("The multiplication tabel of %d is\n",num);
        do
        {
                i = i + 1;
                printf("%dx%d=%d\n", num, i, i * num);

        } while (i < 12);

        return 2;
}
