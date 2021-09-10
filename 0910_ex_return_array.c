/*

一維陣列回傳練習

main() --> fun1()
fun1 return p[] to main;

main() ---> show( k[]);

fun1回傳 五個元素 然後再送至show函數輸出 五個元素

動態陣列指標-->回傳指標管道--->
                int* fun()

由指標接收  --->再送出指標
  int* k;       void show(int *kp)
*/


#include<stdlib.h>
#include<stdio.h>
#include<string.h>


int* fun1();
void show(int *kp);


int main()
{
    int size=5;
    //int *k = (int*)malloc(size*sizeof(int));
    int *k;
    k = fun1();
    show(k);

    return 0;
}

int* fun1()
{
    int size=5;
    int *p = (int*)malloc(size*sizeof(int));
    
    p[0]=12;
    p[1]=13;
    p[2]=15;
    p[3]=19;
    p[4]=23;

    //這邊是用來檢查到底有沒有東西
    //int i=0;
    //for(i=0;i<size;i++)
    //{
    //    printf("%d\n",p[i]);
    //}
    return p;

}    


void show(int *kp)
{
    printf("show印出的\n");
    int i=0;
    for(i=0;i<sizeof(kp);i++)
    {
        printf("%d\n",kp[i]);
    }

}