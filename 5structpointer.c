#include <stdio.h>

struct person
{
    int a;
    char b[10];

}; //還沒有給別名

int main()
{
    struct person bo = {10,"張無忌"};
    struct person *pt;
    pt = &bo;
    printf("%d\n",pt->a);
    printf("%s\n",pt->b);
    return 0;

}