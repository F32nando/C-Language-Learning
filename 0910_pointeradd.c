#include<stdio.h>

int main()
{
    int a[2][3] = {{12,34,56},{90,65,32}};
    int len1 = sizeof(a)/sizeof(int);
    int len2 = sizeof(a[0])/sizeof(int);
    int len0 = len1 / len2;

    printf("row:%d\n",len0);
    printf("col:%d\n",len2);

    int (*pa)[3] = a;
    //int (*pa)[3] = &a[0];
    //int (*pb)[3] = &a[1];

    printf("%d\n",*(*(pa+0)+0));
    printf("%d\n",*(*(pa+0)+1));
    printf("%d\n",*(*(pa+0)+2));
    printf("%d\n",*(*(pa+1)+0));
    printf("%d\n",*(*(pa+1)+1));
    printf("%d\n",*(*(pa+1)+2));

    return 0;


}