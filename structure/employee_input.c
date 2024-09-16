#include<stdio.h>
#include<string.h>
struct structure
{
    char name[13];
    int code;
    int salary;
    int year_of_servie;
};

int main()
{
    struct structure e1,e2,e3;
    printf("Enter the name of the 1st employ:");
    fgets(e1.name,14,stdin);
    printf("Enter the code of the 1st employ:");
    scanf("%d",&e1.code);
    printf("Enter the salary of the 1st employ:");
    scanf("%d",&e1.salary);
    
    printf("Enter the year of service:");
    scanf(" %d",&e1.year_of_servie);

    printf("%s %d %d %d",e1.name,e1.code,e1.salary,e1.year_of_servie);
    
    return 0;
}