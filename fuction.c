#include<stdio.h>
int sum(int a, int b);//with arguments and with return value
void printstar(int n);//with arugments and without return value
int takenumber();//without arguments and with return value
void quizzer();//without arguments and without return value
int main()
{ 
    int a=40,b=60,c;
    //printf("the sum is %d",c);
   // printstar(8);
   c=takenumber();
   printf("the entered number is %d \n",c);
   if (c==6)
   { quizzer();
   printf("You have exited the quiz\n");
   }
   

    return 0;
}
int sum(int a, int b)
{
    return a+b;
}
void printstar(int n){
    for (int i = 0; i < n; i++)
    {
        printf("%c",'*');
    }
    
}
int takenumber(){
    int i;
    printf("Enter a number:");
    scanf("%d",&i);
    return i;
}
void quizzer(){

    printf("You have entered the quizz because your dumbass entered a 6\n");

}
