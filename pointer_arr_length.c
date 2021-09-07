
#include <stdio.h>

int main()
{
    int a[]={12,45,67,21,99};
    int len = sizeof(a)/sizeof(int);
    int *pa;

    pa = a;

    int i;
    for (i=0;i<len;i++)
    {
        printf("%d\t",*(pa+i));
    }
}