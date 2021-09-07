
#include<stdio.h>
int main()
{
    int a[]={12,45,67,21,97};
    int *pa;
    pa = a;

    printf("%d\t",*(pa+0));
    printf("%d\t",*(pa+1));
    printf("%d\t",*(pa+2));
    printf("%d\t",*(pa+3));
    printf("%d\t",*(pa+4));

}