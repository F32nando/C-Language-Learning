

#include<stdio.h>
#include <string.h>

void input();
void cal();
void show();
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
    printf("%s","請輸入數值a:");
    scanf("%d",&a);
    printf("%s","請輸入數值b:");
    scanf("%d",&b);
    cal(a,b);
}

void cal(int a, int b)
{
	int sum = 0;
    sum = a * b;
    show(sum);
}

void show(int sum)
{
    printf("sum=%d\n",sum);
    exitfun();
}

void exitfun()
{
	char k=' ';
	printf("請選擇(y)繼續運算(n)結束運算:");
    scanf("%s", &k);
    

    switch(k)
    {
        case 'y':
        {
            input();
            break;
        }
        case 'n':
        {
            break;
        }
    }

}