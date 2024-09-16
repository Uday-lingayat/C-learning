#include<stdio.h>
int main()
{
    FILE *point;
    point=fopen("file.txt","r");
    int num;
    fscanf(point,"%d",&num);
    // fclose(point); useless here 
    point=fopen("file.txt","w");
    fprintf(point,"%d",num*2);
    fclose(point);
    return 0;
}