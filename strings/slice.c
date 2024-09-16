#include <stdio.h>
char *slice(char arr[], int u, int v);
int main()
{
    char name[] = "Udaylingayat";
    printf("%s\n", slice(name,0,1));
    return 0;
}

// failed attempt ** dikkat = ar ki length variable me gadbad aa rhi hai
// void slice(char arr[],int u,int v){
//     u=u-1;//letter to index
//     v=v-1;
//     int len=v-u;
//     char ar[len+1];
//     int i = u;
//    while (i<=v)
//    {
//      ar[i-u+1]=arr[i];
//      i++;
//    }
//     printf("%s\n",ar);
// }

char *slice(char str[], int u, int v)
{

    char *ptr2 = &str[v];
    char *ptr1 = &str[u];

    str = ptr1;
    str[v+1] = '\0';

    return str;
}