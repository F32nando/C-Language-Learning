#include <stdio.h>

struct person
{
    int a;
    int b;

}lisa;

int main()
{
    int sum = 0;
    lisa.a = 30;
    lisa.b = 50;
    sum = lisa.a = lisa.b;
    printf("sum=%d",sum);

}