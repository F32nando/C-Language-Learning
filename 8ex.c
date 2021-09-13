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

struct person
{
    int a[5];

}; //還沒有給別名

void show(struct person *bo);


int main()
{
    int arr[5]= {10,20,30,40,50};
    struct person po;

    int length = sizeof(arr)/sizeof(int);
    
    int i;
    for(i=0;i<length;i++)
    {
        po.a[i]=arr[i];
    
    }    
    
    show (&po); //把別名資料 丟給 指標結構 去接 
    return 1;

}

void show(struct person *bo)
{
    printf("%d\n",bo->a[0]); 
    printf("%d\n",bo->a[1]);
    printf("%d\n",bo->a[2]);
    printf("%d\n",bo->a[3]);
    printf("%d\n",bo->a[4]);
}

