#include <stdio.h>

struct person
{
    int a;
    int b;

}; //還沒有給別名

void show(struct person *bo);


int main()
{
    struct person bill = {20,89};
    show (&bill); //把別名資料 丟給 指標結構 去接 
    return 1;

}

void show(struct person *bo)
{
    printf("%d\n",bo->a); 
    printf("%d\n",bo->b);
}