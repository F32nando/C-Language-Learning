#include<stdio.h>
int main()
{
    int i=50;
    void *pv;
    pv = &i;

    //本來void沒有資料型態但是要合併的事整數型態所以
    //強迫轉換型態  將指標冠上資料型態
    printf("%d",*(int*)pv);
    return 0;

}