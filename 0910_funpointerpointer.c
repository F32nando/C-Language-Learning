#include<stdio.h>

void ca3(int a,int b);

int main()
{
    int x=30;
    int y=90;
    int *px = &x;
    int *py = &y;
    
    ca3(*px,*py);

    return 0;

}

void ca3(int a, int b)
{
    int sum=0;
    
    sum = a + b; //指標 當然也可以把pa pb在化成指標去用
    printf("%d",sum); //回去取a的值
}   