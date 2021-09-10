#include<stdlib.h>
#include<stdio.h>

int main()
{

    int *a = (int*)malloc(sizeof(int));
    int len = sizeof(a);
    printf("%d\n",len);

    return 0;
}