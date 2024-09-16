#include <stdio.h>
typedef struct name_salary
{
    char name[30];
    int salary;
} employ;

int main()
{
    FILE *point;
    employ e1, e2;
    point = fopen("empoly.txt", "a");

    printf("Enter the name of first employ:\n");
    scanf("%s", &e1.name);
    fprintf(point, "i.%s, ", e1.name);
    printf("Enter the salary of first employ:\n");
    scanf("%d", &e1.salary);
    fprintf(point, "%d\n", e1.salary);
    //second empoly
    printf("Enter the name of second employ:\n");
    scanf("%s", &e2.name);
    fprintf(point, "ii.%s, ", e2.name);
    printf("Enter the salary of second employ:\n");
    scanf("%d", &e2.salary);
    fprintf(point, "%d\n", e2.salary);
    fclose(point);
    return 0;
}