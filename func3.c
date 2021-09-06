

#include<stdio.h>
#include <string.h>

void input();
void cal(int a, int b);
void show(int total);
void exitfun();


int main()
{
    input();
    return 0;
}


void input()
{
    int a = 0;
    int b = 0;
    printf("%s","請輸入A值:");
    scanf("%d",&a);
    printf("%s","請輸入B值:");
    scanf("%d",&b);
    cal(a,b);
}

void cal(int a, int b)
{
    int total;
    total = a + b;
    show(total);
}

void show(int total)
{
    int k;
    printf("巧輸入(1)重新執行(2)完全結束:");
    scanf("%d", &k);

    switch(k)
    {
        case 1:
        {
            input();
            break;
        }
        case 2
        {
            break;
        }
    }

}