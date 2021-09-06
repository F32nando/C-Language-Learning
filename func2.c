

#include<stdio.h>
#include <string.h>

void input();
void cal();
void show();
void exitfun();

int a = 0;
int b = 0; 
int total = 0;


int main()
{
    input();
    return 0;
}


void input()
{
    printf("%s","請輸入A值:");
    scanf("%d",&a);
    printf("%s","請輸入B值:");
    scanf("%d",&b);
    cal();
}

void cal()
{
    total = a + b;
    printf("a+b=%d\n",total);
    show();
}

void show()
{
    int k;
    printf("請輸入(1)重新執行(2)完全結束:");
    scanf("%d", &k);

    switch(k)
    {
        case 1:
        {
            input();
            break;
        }
        case 2:
        {
            break;
        }
    }

}