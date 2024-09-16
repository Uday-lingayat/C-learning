#include<stdio.h>
#include<string.h>
int main()
{
    char surname[]="lingayat",c;
    int count,check;
    for (int i = 0; i < strlen(surname);)
    {
        if (surname[i]=='u')
        {
            printf("yes it is in the string\n");
            break;
        }
        else if (surname[i]!='u')
        {
            i++;
            check=0;
        }
        
    }
    if (check==0)
    {
        printf("sorry the character is not in the string :(\n");
    }
    

    
    return 0;
}