#include<stdio.h>

struct person
{
    int a;
    int b;

};

struct person ball()
{
    struct person one = {12,67};
    return one;
}


int main()
{
    struct person th=ball();
    printf("%d\n",th.a);
    printf("%d\n",th.b);

    return 0;
}