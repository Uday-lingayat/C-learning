#include<stdio.h>
#include<string.h>
struct employee
{
    char name[15];
    int code;
    int salary;

};
int main()
{
    struct employee google[10];
    int how_many;
    printf("how many employee's data do you want to enter\n");
    scanf("%d",&how_many);
    fflush(stdin);
    for (int i=0 ; i < how_many; i++)
    {
    printf("Enter the name of the  employ:\n");
    fgets(google[i].name,15,stdin);
    fflush(stdin);
    printf("Enter the code of the 1st employ:");
    scanf("%d",&google[i].code);
    fflush(stdin);
    printf("Enter the salary of the 1st employ:");
    scanf("%d",&google[i].salary);
    fflush(stdin);
    printf("\n%s %d %d \n",google[i].name,google[i].code,google[i].salary);
    }
    return 0;
}