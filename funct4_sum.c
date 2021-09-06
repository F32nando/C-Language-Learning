//測試第四種函式寫法
//有傳入 有回傳

#include<stdio.h>
#include <string.h>

int cal(int x, int y);

int main()
{
    int total = cal(25,46);
    printf("x+y = %d",total);
    return 0;
}

int cal(int x, int y)
{
    int sum = x + y;
    return sum;
}
