#include<stdio.h>
int main()
{
    int marks_1d[4]={1,2,3,4};
    int marks_2d[3][3]={{1,2,3},
                        {4,5,6},
                        {7,8,9}};//marks_2d is 3x3 matrix

    int marks_3d[3][3][3]={{{1,2,3},
                           {11,12,13},
                           {21,22,23} },

                           {{10,20,30},
                           {110,120,130},
                           {210,220,230}},

                           {{100,200,300},
                           {1100,1200,1300},
                           {2100,2200,2300}}};
    /*for (int i = 0; i < 4; i++)
    {
        printf("\nEnter the value of %d element of the array ",i);
        scanf("%d",&marks_1d[i]);
    }*/
   /* for (int i = 0; i < 4; i++)
    {
        printf("the value of %d element of array is %d\n",i+1,marks_1d[i]);
    }
    */
   printf("The single dimension array element %d\n",marks_1d[3]);
   
   printf("The double dimension array element %d\n",marks_2d[2][2]);
   
   printf("The triple dimension array element %d",marks_3d[2][2][2]);
    
    return 0;
}
