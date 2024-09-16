#include <stdio.h>
// program to manage the marks of students from class 1 to 5 each class has 15 students from roll number 1 to 15
int main()
{

    int class, roll, class_students_marks[5][15]={{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,},};
    char check;

    printf("Do you want to edit the marks of student (y=yes/n=No)");
    scanf("%ch", &check);
    while (check == 'y' || check == 'Y')
    {

        if (check == 'y' || check == 'Y')
        {
            printf("Enter the class of student:");
            scanf("%d", &class);
            printf("\nEnter the roll number of student:");
            scanf("%d", &roll);
            printf("\nEnter the marks of the student:");
            scanf("%d", &class_students_marks[class - 1][roll - 1]);

            printf("\nMarks of roll number %d of class %d is %d\n ", roll, class, class_students_marks[class - 1][roll - 1]);
            printf("\nDo you want to edit the marks of student (y=yes/n=No)");
            scanf("%ch", &check);
        }
        else if (check == 'n' || check == 'N')
        {
            break;
        }
    }
    printf("Thank you for using this program!");
    return 0;
}