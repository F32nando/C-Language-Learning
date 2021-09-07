//間接表達方式
#include <stdio.h>

int main()
{
    int n[3];
    int *pn = &n[0];//把 pn跟 n[]拉齊頭對應
    
    *(pn+0)=20;  //*pn+0 對照到n[0] 給定值20
    *(pn+1)=50;  //*pn+1 對照到n[1] 給定值50
    *(pn+2)=70;  //*pn+2 對照到n[2] 給定值70

    printf("%d\t",*(pn+0));
    printf("%d\t",*(pn+1));
    printf("%d\t",*(pn+2));
    printf("%d\t",n[0]);
    printf("%d\t",n[1]);
    printf("%d\t",n[2]);
}