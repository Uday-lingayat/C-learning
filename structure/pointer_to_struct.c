#include <stdio.h>
#include <string.h>
struct employee
{
    char name[15];
    int code;
    int salary;
};
int main()
{
    struct employee e1;
    struct employee *ptr; // structure pointer **name of structure=employee **variable name=e1
    ptr = &e1;
    e1.code = 42;
    e1.salary = 42;     
    // now we can print structure elements using:
    printf("%d", (*ptr).code);
    printf("\n%d", ptr->salary);
    return 0;
}