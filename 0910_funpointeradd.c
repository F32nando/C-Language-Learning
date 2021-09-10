#include<stdio.h>

void ca3(int pa,int pb);

int main()
{
    int a;
    int b;
    a=50;
    b=30;
    ca3(a,b);

    return 0;

}

void ca3(int pa, int pb)
{
    int total;
    int *ptotal = &total;
    *ptotal = pa + pb; //指標 當然也可以把pa pb在化成指標去用
    printf("%d",*ptotal); //回去取a的值
}   