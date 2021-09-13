/*
已知

結構:

struct person
{
    int a[5];

}

試寫一程式 指定五個元素資料 後 
傳入 show( struct person *bo)
輸出 5個元素內容


*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct person
{
    int a[5];

}; //還沒有給別名

void show(struct person *bo);


int main()
{
    struct person bill;
    
    bill.a[0] = 55;
    bill.a[1] = 89;
    bill.a[2] = 99;
    bill.a[3] = 35;
    bill.a[4] = 23;
    bill.a[5] = 120;
    bill.a[6] = 890;
    bill.a[7] = 73;
    
    show (&bill); //把別名資料 丟給 指標結構 去接 
    return 1;

}

void show(struct person *bo)
{
    int len1=0;
    int i=0;

    while(1)
    {
        int k1 = bo->a[i];
        char s[255];
        
        // integer to char.
        // itoa(整數,字串,10) 10進位 轉述轉字串
        itoa(k1,s,10);
        len1 = strlen(s); //有幾位數

        //atoi: char to integer 字串轉整數
        //atoi()  itoa()都要 用 <stdlib.h>
        //strlen() 用<string.h>


        if(len1==8)//要是數目字超過7位數字 代表有誤
        {
            break;
        }
        printf("%d\n",k1);

        i=i+1;
        
    }
    
}

