//傳遞陣列 呼叫函式

#include<stdio.h>
#include <string.h>

void show();
void input();

int main()
{
  input();
  return 0;
}

void input()
{
    int a[] = {12,34,56,78,990};
    int length = sizeof(a)/sizeof(int);
    show(a, length);
}


void show(int b[], int len)
{
    printf("length = %d\n",len);

    int i;
    for(i=0;i<len;i++)
    {
        printf("b[%d] = %d\t",i,b[i]);
    }
}
