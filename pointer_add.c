
#include<stdio.h>
int main()
{
    int a = 50;
    int b = 60;
    int total = 0;

    int *pa;
    int *pb;
    int *ptotal;
    
    pa = &a;
    pb = &b;
    ptotal = &total;
    
    *ptotal = *pa + *pb;

    printf("%d\n",*ptotal);

    //*ptotal 已經指向 total 所以 *ptotal變動 指向的位置total內容也變動
    *ptotal = 9999;
    printf("%d\n",total);
}