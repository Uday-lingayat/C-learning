#include<stdio.h>
int main()
{
    FILE *pointer;
    pointer=fopen("file.txt","r");
    int num;
    fscanf(pointer,"%d",&num);// reads the number that occuers on the first first place
    printf("%d\n",num);
    fscanf(pointer,"%d",&num);
    printf("%d\n",num);
    fscanf(pointer,"%d",&num);
    printf("%d\n",num);

    fclose(pointer);//good practice to close the file after its work is done in the program 
    return 0;
}