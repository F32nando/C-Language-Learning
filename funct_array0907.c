//陣列參數題目

//使用 scanf()輸入五個數值陣列元素 到b[]
//後 將 b[]的偶數陣列 放入c陣列
//c陣列用show印出 共有幾個偶數元素

//main ==>input()
//input ==>ifvalue(b[..],len);
//ifvalue ==> show(c[],len);

#include<stdio.h>
#include <string.h>
#include<math.h>

void input();
void ifvalue(int b[], int len);
void show(int c[], int len);

int main()
{
    input();
    return 0;
}

void input()
{
	
    int b[5];
    int len = sizeof(b)/sizeof(int);
    int i;
    for(i=0;i<len;i++)
    {
        printf("請輸入第%d個元素:",i+1);
        scanf("%d",&b[i]);
        printf("b[%d]=%d\n",i,b[i]);
    }

    ifvalue(b,len);
}

void ifvalue(int b[],int len)
{
    int i;
    int j=0;
    //先計算多少個偶數
    for (i=0;i<len;i++){
        if (b[i]%2==0) //輸入為偶數
        {
            j++;//偶數有放元素則位置+1  j就是偶數個數
        }
    }

    //偶數則放入c陣列
    int k=0;
    int len_c=j;//長度 = 偶數個數
    int c[j]; //定義c的長度
    for (i=0;i<len;i++){
        if (b[i]%2==0) //輸入為偶數
        {
            c[k]=b[i];//偶數有放元素則位置+1
            k++;
        }
    }

    
    show(c,len_c);
}

void show(int c[], int len)
{
    int i;
    for(i=0;i<len;i++)
    {
        printf("c[%d]=%d\t ",i,c[i]);
    }
    printf("共有%d個偶數",len);
}