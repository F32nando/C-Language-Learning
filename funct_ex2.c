//使用 函數 系統 求圓面積 和圓周長 至小數點  第二位
// k = 2x^2 + 8y +1 

//main ==>input()
//input ==>circle1(r);  return sum;//圓面積
//input ==>circle2(r); return sum; //圓周長
//input ==> show(t1,t2);
//show ==> exitfun(); 1重新執行回input()  2完全結束

#include<stdio.h>
#include <string.h>
#include<math.h>

#define pi 3.14159

void input();
float circle1(float x);
float circle2(float x);
void show(float t1,float t2);
void exitfun();



int main()
{
    input();
    return 0;
}


void input()
{
	int r = 0;
	
    printf("%s","請輸入半徑r:");
    scanf("%d",&r);
    
    float t1 = circle1(r); //面積
    float t2 = circle2(r);//周長
    show(t1,t2);
}

float circle1(float r)
{
    float sum=0; //面積

    sum = pi*pow(r,2) ;
    printf("c1_sum=%f\n3",sum);
    return sum;
}

float circle2(float r)
{
	float sum=0; //圓周長
    sum = 2*pi*r;
    return sum;
}

void show(float t1, float t2)
{
    printf("圓面積=%.2f  圓周長=%.2f", t1,t2);
    exitfun();
}

void exitfun()
{
	int k=0;
	printf("請選擇(1)重新執行(2)完全結束:");
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