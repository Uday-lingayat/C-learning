#include <stdio.h>
#include <string.h>
struct structure
{
    char name[13];
    int code;
    int salary;
};
void show(struct structure e);
int main()
{
    struct structure e1;
    e1.code = 2611;
    strcpy(e1.name, "Uday Lingayat");
    e1.salary = 24;
    show(e1);

    return 0;
}
void show(struct structure e){

    printf("Name:%s \nCode: %d\nSalary(lpa):%d \n", e.name, e.code, e.salary);
}