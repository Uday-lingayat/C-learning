#include<stdio.h>
#include<string.h>
struct structure
{
    char name[15];
    int code;
    int salary;
    int year_of_servie;
};

int main()
{
    struct structure e1,e2;
    e1.code=2611;
    strcpy(e1.name,"Uday Lingayat");
    e1.salary= 24;
    e1.year_of_servie=4;

    printf("%s %d %d %d\n",e1.name,e1.code,e1.salary,e1.year_of_servie);
    return 0;
}