#include <stdio.h>
typedef struct vector
{
    int x, y;
} vector;
vector vectorsum(vector v1, vector v2);
int main()
{
    vector vecsum;
    vector vec1 = {3, 4};
    vector vec2 = {5, 6};
    vecsum = vectorsum(vec1, vec2);
    printf("%di+%dj + %di+%dj = %di+%dj\n", vec1.x, vec1.y, vec2.x, vec2.y, vecsum.x, vecsum.y);
    return 0;
}
vector vectorsum(vector v1, vector v2)
{

    vector v3;

    v3.x = (v1.x) + v2.x;
    v3.y = (v1.y) + v2.y;

    return v3;//return a stucture with sum
}