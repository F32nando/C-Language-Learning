//設計一個可重複計算方程式
// k = 2x^2 + 8y +1 

//main ==>input()
//input ==>cal(x,y);  return k;
//input ==>show(sum);
//show ==> exitfun(); 1重新執行回input()  2完全結束

#include<stdio.h>
#include <string.h>
#include<math.h>

void input();
int cal();
void show();
void exitfun();



int main()
{
    input();
    return 0;
}


void input()
{
	int x = 0;
	int y = 0; 
    printf("%s","請輸入數值a:");
    scanf("%d",&x);
    printf("%s","請輸入數值b:");
    scanf("%d",&y);
    int sum = cal(x,y);
    show(sum);
}

int cal(int x, int y)
{
	int k ;
    k = 2*pow(x,2) + 8*y +1 ;
    return k;
}

void show(int sum)
{
    printf("sum=%d\n",sum);
    exitfun();
}

void exitfun()
{
	int k=0;
	printf("請選擇(1)繼續運算(2)結束運算:");
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