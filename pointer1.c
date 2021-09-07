
#include<stdio.h>
int main()
{
    int a=30;
    int *pa;
    pa = &a;
    //不能寫int *pa=90;
    //printf("%x\n", *pa);
    

    printf("%d\n",a);
    printf("%x\n",&a);
    printf("%x\n",pa);
    printf("%x\n",&pa);
    printf("%d\n",*pa);
}