#include<stdlib.h>
#include<stdio.h>

int main()
{

    int *a = malloc(sizeof(int));
    
    int len = sizeof(a);
    printf("%d\n",len);
    printf("%p\n",a);
    printf("%d\n",*a);
    
    *a=3000;
    int len2 = sizeof(a);
    printf("%d\n",len2);
    printf("%p\n",a);
    printf("%d\n",*a);

    return 0;
}